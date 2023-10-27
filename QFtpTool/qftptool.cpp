#include "qftptool.h"
#include "ui_qftptool.h"
#include <QFtp>

QFtpTool::QFtpTool(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QFtpTool)
{
    ui->setupUi(this);

    QFtp ftp;
    ftp.connectToHost(ipAddr,21);  //端口默认是21
    ftp.login(account,pwd);

}

QFtpTool::~QFtpTool()
{
    delete ui;
}
