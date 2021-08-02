#include "server.h"
#include <QTcpSocket>
#include <QTextStream>
#include <QProcess>

Server::Server(QObject *parent) :
    QTcpServer(parent)
{
    mSocket = nullptr;

    connect(this, &Server::newConnection, [&]() {
        mSocket = nextPendingConnection();
        QProcess::execute("CLS");
        qDebug() << socketDescriptor << "Client Connected";
    });
}

void Server::sendMessage(const QString &Ms)
{
    if (mSocket) {
        QTextStream T(mSocket);
        T << Ms;
        mSocket -> flush();

    }
}

QByteArray Server::recvMessage()
{
    QByteArray Data = mSocket -> readAll();

//    qDebug() << socketDescriptor << "\r\nData in: " << Data;

    return Data;
}
