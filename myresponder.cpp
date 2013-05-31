#include "myresponder.h"

MyResponder::MyResponder(QHttpRequest *req, QHttpResponse *resp ) : m_request(req), m_response(resp)
{
    connect(req, SIGNAL(data(const QByteArray&)), SLOT(accumulate(const QByteArray&)));
    connect(req, SIGNAL(end()), this, SLOT(reply()));
    connect(resp, SIGNAL(done()), this, SLOT(deleteLater()));
}

void MyResponder::accumulate(const QByteArray &data)
{
    m_data.append(data); 
}

void MyResponder::reply()
{
    m_response->writeHead(200);
    m_response->end("resultStr");
}
