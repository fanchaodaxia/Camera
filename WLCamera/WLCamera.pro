#-------------------------------------------------
#
# Project created by QtCreator 2017-02-16T15:20:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WLCamera
TEMPLATE = app


SOURCES += main.cpp\
        wlcamera.cpp

HEADERS  += wlcamera.h


FORMS    += wlcamera.ui





CONFIG(debug, debug|release):LIBS += -L"C:/Program Files/Basler/pylon 5/Development/lib/Win32" -lPylonGUI_MD_VC120_v5_0\
-lGCBase_MD_VC120_v3_0_Basler_pylon_v5_0\
-lGenApi_MD_VC120_v3_0_Basler_pylon_v5_0\
-lPylonC_MD_VC120\
-lPylonUtility_MD_VC120_v5_0\
-lPylonBase_MD_VC120_v5_0\


INCLUDEPATH += "C:/Program Files/Basler/pylon 5/Development/include"




#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'C:/Program Files/Basler/pylon 5/Development/lib/x64/' -lPylonC_MD_VC120
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'C:/Program Files/Basler/pylon 5/Development/lib/x64/' -lPylonC_MD_VC120d

#INCLUDEPATH += $$PWD/'C:/Program Files/Basler/pylon 5/Development/include'
#DEPENDPATH += $$PWD/'C:/Program Files/Basler/pylon 5/Development/include'
