#ifndef QFTPTOOL_H
#define QFTPTOOL_H

#include <QMainWindow>

namespace Ui {
class QFtpTool;
}

class QFtpTool : public QMainWindow
{
    Q_OBJECT

public:
    explicit QFtpTool(QWidget *parent = 0);
    ~QFtpTool();

private:
    Ui::QFtpTool *ui;
};

#endif // QFTPTOOL_H
