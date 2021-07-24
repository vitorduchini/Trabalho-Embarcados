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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_left;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_right;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_foward;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_back;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuLimo_Arm_Project;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(569, 365);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 130, 441, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_left = new QPushButton(widget);
        pushButton_left->setObjectName(QString::fromUtf8("pushButton_left"));

        horizontalLayout->addWidget(pushButton_left);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_right = new QPushButton(widget);
        pushButton_right->setObjectName(QString::fromUtf8("pushButton_right"));

        horizontalLayout->addWidget(pushButton_right);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(240, 10, 82, 291));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_foward = new QPushButton(widget1);
        pushButton_foward->setObjectName(QString::fromUtf8("pushButton_foward"));

        verticalLayout->addWidget(pushButton_foward);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_back = new QPushButton(widget1);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));

        verticalLayout->addWidget(pushButton_back);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 569, 20));
        menuLimo_Arm_Project = new QMenu(menubar);
        menuLimo_Arm_Project->setObjectName(QString::fromUtf8("menuLimo_Arm_Project"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuLimo_Arm_Project->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_left->setText(QCoreApplication::translate("MainWindow", "Left", nullptr));
        pushButton_right->setText(QCoreApplication::translate("MainWindow", "Right", nullptr));
        pushButton_foward->setText(QCoreApplication::translate("MainWindow", "Foward", nullptr));
        pushButton_back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        menuLimo_Arm_Project->setTitle(QCoreApplication::translate("MainWindow", "Limo Arm Project", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
