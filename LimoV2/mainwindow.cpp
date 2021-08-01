#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include "server.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap img(":/Images/Images/Braco_pos_2.png");
    ui->label_1->setPixmap(img.scaled(400,400,Qt::KeepAspectRatio));

    mServer = new Server(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_StartServer_clicked()
{
    if(!mServer->listen(QHostAddress::Any,23))
    {
        qDebug() << "Server could not start!";
    }
    else
    {
        qDebug() << "Server started";
    }
}


void MainWindow::on_Up_clicked()
{
   QPixmap img(":/Images/Images/Braco_pos_1.png");
   ui->label_1->setPixmap(img.scaled(400,400,Qt::KeepAspectRatio));
   QByteArray Message = "Up";
   mServer->sendMessage(Message);
}


void MainWindow::on_Down_clicked()
{
   QPixmap img(":/Images/Images/Braco_pos_3.png");
   ui->label_1->setPixmap(img.scaled(400,400,Qt::KeepAspectRatio));
   QByteArray Message = "Down";
   mServer->sendMessage(Message);
}

