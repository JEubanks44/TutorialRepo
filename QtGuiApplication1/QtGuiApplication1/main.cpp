#include "KarnaughGUI.h"
#include <QtWidgets/QApplication>
#include <qpushbutton.h>
#include <qslider.h>
#include <qlcdnumber.h>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QLCDNumber lcdNum = new QLCDNumber(*Ui_KarnaughGUIClass::variableLCDNumber)
	KarnaughGUI w;
	w.show();
	return a.exec();
}
