#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class Server;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_StartServer_clicked();

    void on_Up_clicked();

    void on_Down_clicked();

private:
    Ui::MainWindow *ui;
    Server *mServer;
};
#endif // MAINWINDOW_H
