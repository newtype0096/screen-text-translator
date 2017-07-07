# ![Logo](./Logo.jpg) 화면 문자 번역기

OpenCV를 이용하여 선택한 영역에 있는 화면을 캡처 후

Tesseract OCR과 Azure TranslatorAPI를 이용하여 화면에 있는 문자를 인식하여 번역하는 프로그램입니다.

## 개발도구

* Visual Studio 2017
* Tesseract 3.05
* OpenCV 3.2.0
* C++ REST SDK (Casablanca)
* Qt 5.9 (GUI)
* tinyxml2

## 기능
* OCR 테스트 버튼을 통해 Tesseract OCR의 작동이 정상적인지 테스트할 수 있습니다.
* 번역 테스트 버튼을 통해 Azure TranslatorAPI의 작동이 정상적인지 테스트할 수 있습니다.
* 설정에서 사용할 OCR과 API를 선택할 수 있고(예정), 구독 키를 settings.ini 파일에 저장할 수 있습니다.
* 번역 모드 버튼을 통해 윈도우를 바꾸며 단축키를 이용해 버튼의 기능을 사용할 수 있습니다.
