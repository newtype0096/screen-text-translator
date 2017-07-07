#include "ScreenTextTranslator.h"

namespace STT
{
	// 마우스 이벤트 핸들
	Point point1, point2;
	Rect rect;

	// 바탕화면 이미지
	Mat img;

	// 마우스 드래그 여부
	int drag = 0;

	// 영역 선택 완료 여부
	int select_flag = 0;

	// OCR 텍스트
	utility::string_t ocrText;

	// Azure 구독 키
	utility::string_t AzureKey;

	// 토큰 생성 당시 시간
	QTime TokenTime;

	// 토큰 유효 시간
	QTime TokenLimit(0,8);

	// 생성 여부
	bool bToken = false;

	// 번역 텍스트
	utility::string_t transText;

	// 선택한 영영 출력 여부
	bool bShowROI = false;
}

void mouseHandler(int event, int x, int y, int flags, void *param);

ScreenTextTranslator::ScreenTextTranslator(QWidget *parent)
	: QMainWindow(parent)
{	
	ui.setupUi(this);
	this->setContextMenuPolicy(Qt::NoContextMenu); // Toolbar 우클릭시 나오는 컨텍스트 메뉴 비활성화
	connect(ui.actionInfo, SIGNAL(triggered()), this, SLOT(openForm_About())); // actionInfo 버튼에 액션 연결
	connect(ui.actionSettings, SIGNAL(triggered()), this, SLOT(openForm_Settings())); // actionSettings 버튼에 액션 연결
	connect(ui.actionOcrTest, SIGNAL(triggered()), this, SLOT(selectROI())); // actionOcrTest 버튼에 액션 연결
	connect(ui.actionTransTextTest, SIGNAL(triggered()), this, SLOT(testTrans())); // actionOcrTest 버튼에 액션 연결
	connect(ui.actionMode, SIGNAL(triggered()), this, SLOT(ChangeTransMode())); // actionMode 버튼에 액션 연결

	// Toolbar 우클릭시 나타나는 컨텍스트 메뉴 비활성화
	this->setContextMenuPolicy(Qt::NoContextMenu); 

	// settings.ini 파일 읽기
	TCHAR tempKey[35];
	GetPrivateProfileString(TEXT("Azure 구독 키"), TEXT("Subscription Key"), NULL, tempKey, sizeof(tempKey), TEXT("./settings.ini"));
	std::string _tempKey = CW2A(tempKey);
	STT::AzureKey = utility::conversions::to_string_t(_tempKey);

	// 트레이 아이콘
	QIcon icon;
	icon.addFile(QStringLiteral(":/ScreenTextTranslator/Logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);

	// 트레이 메뉴
	traymenu = new QMenu(this);
	traymenu->addAction(ui.actionSettings);
	traymenu->addSeparator();
	traymenu->addAction(ui.actionInfo);
	traymenu->addSeparator();
	traymenu->addAction(ui.actionExit);

	// 트레이
	tray = new QSystemTrayIcon(this);
	tray->setIcon(icon);
	tray->setToolTip(QString::fromLocal8Bit("화면 텍스트 번역기 (Screen Text Translator)"));
	tray->setContextMenu(traymenu);
	tray->show();
}

// About 폼 열기
void ScreenTextTranslator::openForm_About() 
{
	Form_About = new QWidget;
	fa.setupUi(Form_About);
	Form_About->setWindowFlags(Qt::WindowCloseButtonHint); // 윈도우 최소화, 최대화 버튼 숨김
	Form_About->show();
}

// Settings 폼 열기
void ScreenTextTranslator::openForm_Settings() 
{
	Form_Settings = new QWidget;
	fs.setupUi(Form_Settings);
	Form_Settings->setWindowFlags(Qt::WindowCloseButtonHint); // 윈도우 최소화, 최대화 버튼 숨김
	Form_Settings->show();

	fs.lineEdit_SubscriptionKey->setText(QString::fromStdString(utility::conversions::to_utf8string(STT::AzureKey)));

	connect(fs.pushButton_OK, SIGNAL(clicked()), this, SLOT(addKey())); // 설정 - 확인 버튼에 액션 연결
}

// 번역 모드 전환
void ScreenTextTranslator::ChangeTransMode()
{
	this->hide();

	TransMode = new QWidget;
	ft.setupUi(TransMode);
	TransMode->setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowTitleHint); // 윈도우 타이틀바 모든 버튼 숨김
	TransMode->show();

	connect(ft.pushButton_Back, SIGNAL(clicked()), this, SLOT(BackToMain())); // 돌아가기 버튼에 액션 연결
	connect(ft.toolButton_Settings, SIGNAL(clicked()), this, SLOT(openForm_Settings())); // 설정 버튼에 액션 연결
	connect(ft.toolButton_SelectROI, SIGNAL(clicked()), this, SLOT(SelectTransROI())); // 영역 선택 버튼에 액션 연결
	connect(ft.toolButton_TransStart, SIGNAL(clicked()), this, SLOT(StartTrans())); // 영역 선택 버튼에 액션 연결
	connect(ft.toolButton_ShowROI, SIGNAL(clicked()), this, SLOT(ShowROI())); // 영역 선택 버튼에 액션 연결

	RegisterHotKey((HWND)this->winId(), 0, MOD_SHIFT, 'A');
	RegisterHotKey((HWND)this->winId(), 1, MOD_SHIFT, 'S');
	RegisterHotKey((HWND)this->winId(), 2, MOD_SHIFT, 'D');
}

// 프로그램 전역 단축키
bool ScreenTextTranslator::nativeEvent(const QByteArray &eventType, void *message, long *result)
{
	Q_UNUSED(eventType);
	Q_UNUSED(result);

	MSG *msg = static_cast<MSG*>(message);
	if (msg->message == WM_HOTKEY)
	{
		if (msg->wParam == 0)
		{
			//MessageBox(NULL, TEXT("TRANS OK"), TEXT("OK"), MB_OK);
			ft.toolButton_TransStart->clicked();
			return true;
		}
		else if (msg->wParam == 1)
		{
			//MessageBox(NULL, TEXT("SELECT OK"), TEXT("OK"), MB_OK);
			ft.toolButton_SelectROI->clicked();
			return true;
		}
		else if (msg->wParam == 2)
		{
			//MessageBox(NULL, TEXT("ROI OK"), TEXT("OK"), MB_OK);
			ft.toolButton_ShowROI->clicked();
			return true;
		}
	}
	return false;
}

// 선택한 영역 출력
void ScreenTextTranslator::ShowROI()
{
	//STT::bShowROI = !STT::bShowROI;

	//if (STT::bShowROI)
	//{
		HDC hdc = GetDC(0);
		Rectangle(hdc, STT::point1.x, STT::point1.y, STT::point2.x, STT::point2.y);
	//}
	//else
	//{

	//}
}

// 번역 시작
void ScreenTextTranslator::StartTrans()
{
	tesscv->getScreen(STT::img);

	Mat roi = STT::img(STT::rect);

	try
	{
		cv::resize(roi, roi, Size(roi.cols * 3, roi.rows * 3), 0, 0, CV_INTER_NN);

		cvtColor(roi, roi, CV_BGR2GRAY);
		threshold(roi, roi, 130, 255, THRESH_BINARY);

		std::string tempText = tesscv->getText(roi);
		STT::ocrText = utility::conversions::to_string_t(tempText);
	}
	catch (Exception ex)
	{
		MessageBox(NULL, TEXT("영역을 다시 선택하세요"), TEXT("영역 선택 오류"), MB_OK | MB_ICONEXCLAMATION);
		STT::select_flag = 0;
		SelectTransROI();
	}

	utility::string_t space = utility::conversions::to_string_t("");

	// ocrText 유무 검사
	if (space != STT::ocrText)
	{

		// 첫 토큰 생성
		if (STT::bToken == false)
		{
			QTime currentTime;
			STT::TokenTime = currentTime.currentTime();
			STT::bToken = true;

			azure->Init(STT::AzureKey);
			azure->GetAccessTokenAsync(STT::bToken).wait();
			azure->GetTranslateText(STT::ocrText, STT::transText, STT::bToken).wait();

			if (STT::bToken)
			{
				ft.plainTextEdit_TransText->setPlainText(QString::fromStdString(utility::conversions::to_utf8string(STT::transText)).append(QString::fromStdString(utility::conversions::to_utf8string(STT::ocrText))));
			}
			else
			{
				std::string error = "API 구독 키가 잘못 되었거나 만료되었습니다.";
				ft.plainTextEdit_TransText->setPlainText(QString::fromLocal8Bit(error.c_str()).append(QString::fromStdString(utility::conversions::to_utf8string(STT::ocrText))));
			}			
		}
		
		// 토큰 생성 후
		else if (STT::bToken == true)
		{
			QTime currentTime = currentTime.currentTime();

			// 토큰 제한 시간 8분 검사, 8분 초과시 토큰 재 생성
			if (currentTime.minute() - STT::TokenTime.minute() >= 0)
			{
				if (currentTime.minute() - STT::TokenTime.minute() > STT::TokenLimit.minute())
				{
					azure->GetAccessTokenAsync(STT::bToken).wait();
				}
			}
			else
			{
				if (currentTime.minute() - STT::TokenTime.minute() < STT::TokenLimit.minute())
				{
					azure->GetAccessTokenAsync(STT::bToken).wait();
				}
			}

			azure->GetTranslateText(STT::ocrText, STT::transText, STT::bToken).wait();

			if (STT::bToken)
			{
				ft.plainTextEdit_TransText->setPlainText(QString::fromStdString(utility::conversions::to_utf8string(STT::transText)).append(QString::fromStdString(utility::conversions::to_utf8string(STT::ocrText))));
			}
			else
			{
				std::string error = "API 구독 키가 잘못 되었거나 만료되었습니다.";
				ft.plainTextEdit_TransText->setPlainText(QString::fromLocal8Bit(error.c_str()).append(QString::fromStdString(utility::conversions::to_utf8string(STT::ocrText))));
			}
		}

	}

	//SwitchToThisWindow((HWND)TransMode->winId(), TRUE);
}

// 번역 영역 선택
void ScreenTextTranslator::SelectTransROI()
{
	STT::select_flag = 0;

	TransMode->hide();

	Sleep(200);

	tesscv->getScreen(STT::img);

	namedWindow("영역 선택", WINDOW_NORMAL);
	setWindowProperty("영역 선택", WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);
	imshow("영역 선택", STT::img);

	HWND cvhwnd = (HWND)cvGetWindowHandle("영역 선택");
	SwitchToThisWindow(cvhwnd, TRUE);

	cvSetMouseCallback("영역 선택", mouseHandler, NULL); // 선택 영역 사이즈 얻기
	
	int key;

	while (IsWindowVisible(cvhwnd)) // 영역 선택 윈도우가 존재하면
	{
		key = waitKey(60);

		if (key == 27)
		{
			cvDestroyWindow("영역 선택");
			STT::select_flag = 0;
			break; // 윈도우 꺼지면 탈출
		}

		if (STT::select_flag == 1)
		{
			cvDestroyWindow("영역 선택");
			break; // 윈도우 꺼지면 탈출
		}
	}

	TransMode->show();
}

// 메인 윈도우로 돌아감
void ScreenTextTranslator::BackToMain()
{
	UnregisterHotKey((HWND)this->winId(), 0);
	UnregisterHotKey((HWND)this->winId(), 1);
	UnregisterHotKey((HWND)this->winId(), 2);
	TransMode->close();
	this->show();
}

// 테스트 영역 선택
void ScreenTextTranslator::selectROI()
{
	STT::select_flag = 0;

	this->hide();

	Sleep(200);

	tesscv->getScreen(STT::img);

	namedWindow("영역 선택", WINDOW_NORMAL);
	setWindowProperty("영역 선택", WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);
	imshow("영역 선택", STT::img);

	HWND cvhwnd = (HWND)cvGetWindowHandle("영역 선택");

	cvSetMouseCallback("영역 선택", mouseHandler, NULL); // 선택 영역 사이즈 얻기

	int key;

	while (IsWindowVisible(cvhwnd)) // 영역 선택 윈도우가 존재하면
	{
		key = waitKey(60);

		if (key == 27)
		{
			cvDestroyWindow("영역 선택");
			STT::select_flag = 0;
			break; // 윈도우 꺼지면 탈출
		}

		if (STT::select_flag == 1)
		{
			cvDestroyWindow("영역 선택");			
			break; // 윈도우 꺼지면 탈출
		}
	}

	this->show();

	if (STT::select_flag == 1)
	{
		startOCR();
	}
}

// 문자 인식
void ScreenTextTranslator::startOCR()
{
	Mat roi = STT::img(STT::rect);

	try
	{
		cv::resize(roi, roi, Size(roi.cols * 3, roi.rows * 3), 0, 0, CV_INTER_NN);

		cvtColor(roi, roi, CV_BGR2GRAY);
		threshold(roi, roi, 130, 255, THRESH_BINARY);

		// 문자인식 후 하단 Plain Text에 출력
		std::string tempText = tesscv->getText(roi);
		STT::ocrText = utility::conversions::to_string_t(tempText);
		ui.textBrowser_OCR->setPlainText(QString::fromStdString(tempText));
	}
	catch (Exception ex)
	{
		MessageBox(NULL, TEXT("영역을 다시 선택하세요"), TEXT("영역 선택 오류"), MB_OK | MB_ICONEXCLAMATION);
		STT::select_flag = 0;
		selectROI();
	}
}

// Azure 구독 키 등록
void ScreenTextTranslator::addKey()
{
	STT::AzureKey = utility::conversions::to_string_t(fs.lineEdit_SubscriptionKey->text().toStdString());

	// settings.ini 파일에 기록
	WritePrivateProfileString(TEXT("Azure 구독 키"), TEXT("Subscription Key"), fs.lineEdit_SubscriptionKey->text().toStdWString().c_str(), TEXT("./settings.ini"));

	Form_Settings->close();
}

// 번역 테스트 시작
void ScreenTextTranslator::testTrans()
{
	getTransText();
}

// 번역문 얻기
void ScreenTextTranslator::getTransText()
{
	utility::string_t space = utility::conversions::to_string_t("");

	if (space != STT::ocrText)
	{

		if (STT::bToken == false)
		{
			QTime currentTime;
			STT::TokenTime = currentTime.currentTime();
			STT::bToken = true;

			azure->Init(STT::AzureKey);
			azure->GetAccessTokenAsync(STT::bToken).wait();
			azure->GetTranslateText(STT::ocrText, STT::transText, STT::bToken).wait();

			
			if (STT::bToken)
			{
				ui.textBrowser_Trans->setPlainText(QString::fromStdString(utility::conversions::to_utf8string(STT::transText)));
			}
			// API 불가 시
			else
			{
				std::string error = "API 구독 키가 잘못 되었거나 만료되었습니다.";
				ui.textBrowser_Trans->setPlainText(QString::fromLocal8Bit(error.c_str()));
			}
		}
		else if (STT::bToken == true)
		{
			QTime currentTime = currentTime.currentTime();

			if (currentTime.minute() - STT::TokenTime.minute() >= 0)
			{
				if (currentTime.minute() - STT::TokenTime.minute() > STT::TokenLimit.minute())
				{
					azure->GetAccessTokenAsync(STT::bToken).wait();
				}
			}
			else
			{
				if (currentTime.minute() - STT::TokenTime.minute() < STT::TokenLimit.minute())
				{
					azure->GetAccessTokenAsync(STT::bToken).wait();
				}
			}

			azure->GetTranslateText(STT::ocrText, STT::transText, STT::bToken).wait();

			if (STT::bToken)
			{
				ui.textBrowser_Trans->setPlainText(QString::fromStdString(utility::conversions::to_utf8string(STT::transText)));
			}
			// API 불가 시
			else
			{
				std::string error = "API 구독 키가 잘못 되었거나 만료되었습니다.";
				ui.textBrowser_Trans->setPlainText(QString::fromLocal8Bit(error.c_str()));
			}
		}
	}
}
 
// 영역 선택 창에서 마우스로 영역 선택
void mouseHandler(int event, int x, int y, int flags, void *param)
{
	if (event == CV_EVENT_LBUTTONDOWN && !STT::drag)
	{
		/* left button clicked. STT selection begins */
		STT::point1 = Point(x, y);
		STT::drag = 1;
	}

	if (event == CV_EVENT_MOUSEMOVE && STT::drag)
	{
		/* mouse dragged. STT being selected */
		Mat img1 = STT::img.clone();
		STT::point2 = Point(x, y);
		rectangle(img1, STT::point1, STT::point2, CV_RGB(255, 0, 0), 3, 8, 0);
		imshow("영역 선택", img1);
	}

	if (event == CV_EVENT_LBUTTONUP && STT::drag)
	{
		STT::point2 = Point(x, y);

		if (STT::point1.x < STT::point2.x)
			STT::rect = Rect(STT::point1.x, STT::point1.y, STT::point2.x - STT::point1.x, STT::point2.y - STT::point1.y);
		else
			STT::rect = Rect(STT::point2.x, STT::point2.y, STT::point1.x - STT::point2.x, STT::point1.y - STT::point2.y);
		STT::drag = 0;
	}

	if (event == CV_EVENT_LBUTTONUP)
	{
		/* STT selected */
		STT::select_flag = 1;
		STT::drag = 0;
	}
}