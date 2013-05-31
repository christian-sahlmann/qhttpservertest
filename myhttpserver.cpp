#include "myhttpserver.h"
#include <QtNetwork>
#include "myresponder.h"

MyHttpServer::MyHttpServer(QObject *parent) :
    QHttpServer(parent)
{
    connect(this, SIGNAL(newRequest(QHttpRequest*, QHttpResponse*)), this, SLOT(handleRequest(QHttpRequest*, QHttpResponse*)));	
}

void MyHttpServer::handleRequest(QHttpRequest *req, QHttpResponse *resp)
{
    new MyResponder(req, resp);
}
