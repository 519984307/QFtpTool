#-------------------------------------------------
#
# Project created by QtCreator 2023-10-26T23:24:09
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QFtpTool
TEMPLATE = app

include($$PWD/QFtpTool.pri)

INCLUDEPATH += "../include"
INCLUDEPATH += "../include/Qt5Ftp"

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

win32{
    CONFIG(debug, debug|release) {
        DESTDIR = $$PWD/../bin/win/x64/Debug
        LIBS +=  -L$$PWD/../lib/x64/Debug -L$$DESTDIR

        LIBS += -lQt5Ftpd
    }
    else {
        DESTDIR = $$PWD/../bin/win/x64/Release
        LIBS +=  -L$$PWD/../lib/x64/Release -L$$DESTDIR

        LIBS += -lQt5Ftp
    }
}
else{

    CONFIG(debug, debug|release) {
        DESTDIR = $$PWD/../bin/win/x64/Debug
        LIBS +=  -L$$PWD/../lib/x64/Debug -L$$DESTDIR

        LIBS += -lQt5Ftpd
    }
    else {
        DESTDIR = $$PWD/../bin/win/x64/Release
        LIBS +=  -L$$PWD/../lib/x64/Release -L$$DESTDIR

        LIBS += -lQt5Ftp
    }
}
