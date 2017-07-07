#pragma once

#include <QtWidgets/QMainWindow>
#include <qsystemtrayicon.h>
#include <qmenu.h>
#include <qdatetime.h>
#include <atlstr.h>
#include <tinyxml2/tinyxml2.h>
#include "ui_ScreenTextTranslator.h"
#include "ui_About.h" // Form_About
#include "ui_Settings.h" // Form_Settings
#include "ui_TransMode.h" // TransMode
#include "TessCV.h"
#include "AzureAPI.h"

class ScreenTextTranslator : public QMainWindow
{
	Q_OBJECT

public:
	ScreenTextTranslator(QWidget *parent = Q_NULLPTR);
	QWidget *Form_About; // Form_About
	QWidget *Form_Settings; // Form_Settings
	QWidget *TransMode; // TransMode
	
	void startOCR();
	void getTransText();
	bool nativeEvent(const QByteArray &eventType, void *message, long *result);

	TessCV *tesscv = new TessCV;
	Azure *azure = new Azure;
	QSystemTrayIcon *tray;
	QMenu *traymenu;

private slots:
	void openForm_About(); // About 폼 열기
	void openForm_Settings(); // Settings 폼 열기
	void selectROI(); // 테스트 영역 선택
	void testTrans(); // 번역 시작
	void addKey(); // 구독 키 등록
	void ChangeTransMode(); // 번역 모드 전환
	void BackToMain(); // 메인 윈도우로 돌아감
	void SelectTransROI(); // 번역 영역 선택
	void StartTrans(); // 번역 시작
	void ShowROI();

private:
	Ui::ScreenTextTranslatorClass ui;
	Ui::Form_About fa; // Form_About
	Ui::Form_Settings fs; // Form_Settings
	Ui::Form_TransMode ft; // TransMode
};