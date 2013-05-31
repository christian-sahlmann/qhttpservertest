#ifndef MYRESPONDER_H
#define MYRESPONDER_H

#include <QObject>
#include <qhttprequest.h>
#include <qhttpresponse.h>

class MyResponder : public QObject
{
    Q_OBJECT
public:
    MyResponder(QHttpRequest *req, QHttpResponse *resp);

signals:
    void done();

private slots:
    void accumulate(const QByteArray&);
    void reply();

private:
    QHttpRequest *m_request;
    QHttpResponse *m_response;
    QByteArray m_data;
};

#endif // MYRESPONDER_H
