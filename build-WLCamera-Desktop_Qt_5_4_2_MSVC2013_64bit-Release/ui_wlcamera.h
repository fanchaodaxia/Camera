/********************************************************************************
** Form generated from reading UI file 'wlcamera.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WLCAMERA_H
#define UI_WLCAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WLCamera
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WLCamera)
    {
        if (WLCamera->objectName().isEmpty())
            WLCamera->setObjectName(QStringLiteral("WLCamera"));
        WLCamera->resize(400, 300);
        menuBar = new QMenuBar(WLCamera);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        WLCamera->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WLCamera);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WLCamera->addToolBar(mainToolBar);
        centralWidget = new QWidget(WLCamera);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        WLCamera->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(WLCamera);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WLCamera->setStatusBar(statusBar);

        retranslateUi(WLCamera);

        QMetaObject::connectSlotsByName(WLCamera);
    } // setupUi

    void retranslateUi(QMainWindow *WLCamera)
    {
        WLCamera->setWindowTitle(QApplication::translate("WLCamera", "WLCamera", 0));
    } // retranslateUi

};

namespace Ui {
    class WLCamera: public Ui_WLCamera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WLCAMERA_H
