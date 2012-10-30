#-------------------------------------------------
#
# Project created by QtCreator 2012-09-28T11:04:18
#
#-------------------------------------------------

QT       += core gui

TARGET = Docfrac
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    about.cpp \
    propertiesdialog.cpp \
    progressdialog.cpp \
    batchmodel.cpp \
    batchentry.cpp

HEADERS  += mainwindow.h \
    about.h \
    propertiesdialog.h \
    progressdialog.h \
    batchmodel.h \
    batchentry.h

FORMS    += mainwindow.ui \
    about.ui \
    propertiesdialog.ui \
    progressdialog.ui

OTHER_FILES +=

RESOURCES += \
    common.qrc
