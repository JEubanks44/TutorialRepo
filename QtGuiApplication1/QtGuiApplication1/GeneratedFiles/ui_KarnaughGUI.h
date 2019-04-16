/********************************************************************************
** Form generated from reading UI file 'KarnaughGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KARNAUGHGUI_H
#define UI_KARNAUGHGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KarnaughGUIClass
{
public:
    QWidget *centralWidget;
    QSlider *horizontalSlider;
    QLabel *label;
    QLCDNumber *variableLCDNumber;
    QFrame *frame;
    QLabel *outputLabel4;
    QLabel *outputLabel3;
    QLabel *outputLabel2;
    QLabel *outputLabel1;
    QFrame *frame_2;
    QLineEdit *lineEdit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KarnaughGUIClass)
    {
        if (KarnaughGUIClass->objectName().isEmpty())
            KarnaughGUIClass->setObjectName(QStringLiteral("KarnaughGUIClass"));
        KarnaughGUIClass->resize(617, 352);
        centralWidget = new QWidget(KarnaughGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 20, 61, 16));
        horizontalSlider->setMinimum(2);
        horizontalSlider->setMaximum(4);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 10, 111, 31));
        variableLCDNumber = new QLCDNumber(centralWidget);
        variableLCDNumber->setObjectName(QStringLiteral("variableLCDNumber"));
        variableLCDNumber->setGeometry(QRect(10, 40, 64, 23));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(410, 20, 201, 81));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        outputLabel4 = new QLabel(frame);
        outputLabel4->setObjectName(QStringLiteral("outputLabel4"));
        outputLabel4->setGeometry(QRect(10, 60, 171, 21));
        outputLabel3 = new QLabel(frame);
        outputLabel3->setObjectName(QStringLiteral("outputLabel3"));
        outputLabel3->setGeometry(QRect(10, 40, 181, 21));
        outputLabel2 = new QLabel(frame);
        outputLabel2->setObjectName(QStringLiteral("outputLabel2"));
        outputLabel2->setGeometry(QRect(10, 20, 181, 21));
        outputLabel1 = new QLabel(frame);
        outputLabel1->setObjectName(QStringLiteral("outputLabel1"));
        outputLabel1->setGeometry(QRect(10, 0, 171, 21));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(179, 139, 211, 151));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 21, 20));
        KarnaughGUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(KarnaughGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        KarnaughGUIClass->setStatusBar(statusBar);

        retranslateUi(KarnaughGUIClass);

        QMetaObject::connectSlotsByName(KarnaughGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *KarnaughGUIClass)
    {
        KarnaughGUIClass->setWindowTitle(QApplication::translate("KarnaughGUIClass", "KarnaughGUI", nullptr));
        label->setText(QApplication::translate("KarnaughGUIClass", "Number of Variables", nullptr));
        outputLabel4->setText(QApplication::translate("KarnaughGUIClass", "Output A:", nullptr));
        outputLabel3->setText(QApplication::translate("KarnaughGUIClass", "Output A:", nullptr));
        outputLabel2->setText(QApplication::translate("KarnaughGUIClass", "Output A:", nullptr));
        outputLabel1->setText(QApplication::translate("KarnaughGUIClass", "Output A:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KarnaughGUIClass: public Ui_KarnaughGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KARNAUGHGUI_H
