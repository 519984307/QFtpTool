#include "qftptool.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFtpTool w;
    w.show();

    return a.exec();
}
