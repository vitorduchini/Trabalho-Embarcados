/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Down;
    QPushButton *Up;
    QPushButton *StartServer;
    QLabel *label_1;
    QLabel *label_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *GetStatus;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLCDNumber *lcdVel;
    QLCDNumber *lcdPos;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *Angle_Box;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(744, 500);
        MainWindow->setMinimumSize(QSize(500, 500));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Down = new QPushButton(centralwidget);
        Down->setObjectName(QString::fromUtf8("Down"));
        Down->setGeometry(QRect(10, 250, 100, 100));
        Down->setMinimumSize(QSize(100, 100));
        Down->setStyleSheet(QString::fromUtf8("QPushButton#Down{\n"
"	background-color: transparent;\n"
"	border-image: url(:/Images/Images/Seta_H);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        Up = new QPushButton(centralwidget);
        Up->setObjectName(QString::fromUtf8("Up"));
        Up->setEnabled(true);
        Up->setGeometry(QRect(130, 250, 100, 100));
        Up->setMinimumSize(QSize(100, 100));
        Up->setSizeIncrement(QSize(200, 300));
        Up->setMouseTracking(false);
        Up->setStyleSheet(QString::fromUtf8("QPushButton#Up{\n"
"	background-color: transparent;\n"
"	border-image: url(:/Images/Images/Seta_AH);\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        Up->setCheckable(false);
        StartServer = new QPushButton(centralwidget);
        StartServer->setObjectName(QString::fromUtf8("StartServer"));
        StartServer->setGeometry(QRect(-90, 0, 900, 21));
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(300, 30, 400, 400));
        label_1->setMaximumSize(QSize(1000, 1000));
        label_1->setAutoFillBackground(false);
        label_1->setScaledContents(true);
        label_1->setOpenExternalLinks(false);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 200, 91, 31));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 90, 61, 71));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_4->addWidget(label_6);

        GetStatus = new QPushButton(centralwidget);
        GetStatus->setObjectName(QString::fromUtf8("GetStatus"));
        GetStatus->setGeometry(QRect(140, 60, 61, 20));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 50, 81, 111));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        lcdVel = new QLCDNumber(layoutWidget1);
        lcdVel->setObjectName(QString::fromUtf8("lcdVel"));
        lcdVel->setFrameShape(QFrame::StyledPanel);
        lcdVel->setSmallDecimalPoint(true);
        lcdVel->setDigitCount(3);
        lcdVel->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout->addWidget(lcdVel);

        lcdPos = new QLCDNumber(layoutWidget1);
        lcdPos->setObjectName(QString::fromUtf8("lcdPos"));
        lcdPos->setFrameShape(QFrame::StyledPanel);
        lcdPos->setDigitCount(3);
        lcdPos->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout->addWidget(lcdPos);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 360, 81, 91));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Angle_Box = new QSpinBox(layoutWidget2);
        Angle_Box->setObjectName(QString::fromUtf8("Angle_Box"));

        verticalLayout_2->addWidget(Angle_Box);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(130, 370, 61, 71));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 744, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Down->setText(QString());
        Up->setText(QString());
        StartServer->setText(QCoreApplication::translate("MainWindow", "Start server", nullptr));
        label_1->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Server - Client", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Velocity", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Position", nullptr));
        GetStatus->setText(QCoreApplication::translate("MainWindow", "Get Status", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Client - Server", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Angle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
