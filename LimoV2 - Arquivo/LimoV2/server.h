#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>

class QTcpSocket;

class Server : public QTcpServer
{
    Q_OBJECT

public:
    explicit Server(QObject *parent = 0);
    void sendMessage(const QString &Ms);
    QByteArray recvMessage();

private:
    QTcpSocket *mSocket;
    int socketDescriptor;
};

#endif
