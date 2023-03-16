QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += multimedia
QT += multimediawidgets
QT += printsupport
QT += webenginewidgets
RC_ICONS = Kati-Face.ico
CONFIG += c++17



#WindowsArguments = dpiawareness=0,1,2

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    csvhandler.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    csvhandler.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
