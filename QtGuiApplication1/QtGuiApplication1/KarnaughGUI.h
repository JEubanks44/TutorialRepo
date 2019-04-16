#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_KarnaughGUI.h"

class KarnaughGUI : public QMainWindow
{
	Q_OBJECT

public:
	KarnaughGUI(QWidget *parent = Q_NULLPTR);

private:
	Ui::KarnaughGUIClass ui;
};
