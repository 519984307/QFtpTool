/********************************************************************************
** Form generated from reading UI file 'qftptool.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFTPTOOL_H
#define UI_QFTPTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QFtpTool
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QListView *listView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QFtpTool)
    {
        if (QFtpTool->objectName().isEmpty())
            QFtpTool->setObjectName(QStringLiteral("QFtpTool"));
        QFtpTool->resize(800, 601);
        centralwidget = new QWidget(QFtpTool);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        horizontalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableView = new QTableView(groupBox_3);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);


        horizontalLayout_2->addWidget(groupBox_3);


        verticalLayout_3->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listView = new QListView(groupBox);
        listView->setObjectName(QStringLiteral("listView"));

        horizontalLayout->addWidget(listView);


        verticalLayout_3->addWidget(groupBox);

        verticalLayout_3->setStretch(0, 5);
        verticalLayout_3->setStretch(1, 2);
        QFtpTool->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QFtpTool);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        QFtpTool->setMenuBar(menubar);
        statusbar = new QStatusBar(QFtpTool);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        QFtpTool->setStatusBar(statusbar);

        retranslateUi(QFtpTool);

        QMetaObject::connectSlotsByName(QFtpTool);
    } // setupUi

    void retranslateUi(QMainWindow *QFtpTool)
    {
        QFtpTool->setWindowTitle(QApplication::translate("QFtpTool", "MainWindow", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QFtpTool", " \350\277\234\347\250\213\346\226\207\344\273\266", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QFtpTool", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QFtpTool", "Tab 2", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("QFtpTool", "\346\234\254\345\234\260\346\226\207\344\273\266", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QFtpTool", "\344\270\213\350\275\275\345\210\227\350\241\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QFtpTool: public Ui_QFtpTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFTPTOOL_H
