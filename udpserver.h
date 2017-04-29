#ifndef UDPSERVER_H
#define UDPSERVER_H

#include <QObject>

class UDPServer : public QObject
{
    Q_OBJECT
public:
    explicit UDPServer(QObject *parent = 0);

signals:

public slots:
};

#endif // UDPSERVER_H