#include "ScreenTextTranslator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ScreenTextTranslator w;
	w.show();
	return a.exec();
}