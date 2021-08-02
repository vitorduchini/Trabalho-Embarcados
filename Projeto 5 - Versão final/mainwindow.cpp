#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include "server.h"
#include <QPixmap>
#include <QPalette>
#include <QLCDNumber>
#include <QSpinBox>
#include <QMessageBox>

int angle;

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
        QMessageBox::about(this, "Server", "Server could not start!");
        qDebug() << "Server could not start!";
    }
    else
    {
        QMessageBox::about(this,"Server", "Server started");
        qDebug() << "Server started";
    }
}


void MainWindow::on_Up_clicked()
{
   QPixmap img(":/Images/Images/Braco_pos_3.png");
   ui->label_1->setPixmap(img.scaled(400,400,Qt::KeepAspectRatio));

   QByteArray QBA_angle;
   QBA_angle.setNum(angle);

   QByteArray Message = "Up\r\n";
   mServer->sendMessage(QBA_angle);

}

void MainWindow::on_Down_clicked()
{
   QPixmap img(":/Images/Images/Braco_pos_1.png");
   ui->label_1->setPixmap(img.scaled(400,400,Qt::KeepAspectRatio));

   QByteArray QBA_angle;
   QBA_angle.setNum(angle);

   QByteArray Message = "AH: \r\n";
   mServer->sendMessage(QBA_angle);
}

void MainWindow::on_Angle_Box_valueChanged(int arg1)
{
        angle = ui -> Angle_Box -> value();
}

void MainWindow::on_GetStatus_clicked()
{
    QByteArray Data;
    Data = mServer->recvMessage();

    this -> ui -> lcdVel -> display(Data);
    this -> ui -> lcdPos -> display(Data);
}
