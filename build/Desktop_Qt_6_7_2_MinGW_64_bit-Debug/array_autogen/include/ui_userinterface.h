/********************************************************************************
** Form generated from reading UI file 'userinterface.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINTERFACE_H
#define UI_USERINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userinterface
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *userinterface)
    {
        if (userinterface->objectName().isEmpty())
            userinterface->setObjectName("userinterface");
        userinterface->resize(800, 600);
        centralwidget = new QWidget(userinterface);
        centralwidget->setObjectName("centralwidget");
        userinterface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(userinterface);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        userinterface->setMenuBar(menubar);
        statusbar = new QStatusBar(userinterface);
        statusbar->setObjectName("statusbar");
        userinterface->setStatusBar(statusbar);

        retranslateUi(userinterface);

        QMetaObject::connectSlotsByName(userinterface);
    } // setupUi

    void retranslateUi(QMainWindow *userinterface)
    {
        userinterface->setWindowTitle(QCoreApplication::translate("userinterface", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userinterface: public Ui_userinterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINTERFACE_H
