#ifndef MYHTTPSERVER_H
#define MYHTTPSERVER_H

#include <qhttpserver.h>

class MyHttpServer : public QHttpServer
{
    Q_OBJECT
public:
    MyHttpServer(QObject *parent = 0);

public slots:
    void handleRequest(QHttpRequest *req, QHttpResponse *resp);
};

#endif // MYHTTPSERVER_H
