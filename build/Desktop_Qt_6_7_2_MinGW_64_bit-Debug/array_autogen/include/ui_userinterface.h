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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userinterface
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *selectArray;
    QLineEdit *arraySizeInput;
    QPushButton *selectComplex;
    QPushButton *SelectPolinom;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuProgramm;

    void setupUi(QMainWindow *userinterface)
    {
        if (userinterface->objectName().isEmpty())
            userinterface->setObjectName("userinterface");
        userinterface->resize(800, 600);
        centralwidget = new QWidget(userinterface);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(70, 180, 160, 141));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        selectArray = new QPushButton(verticalLayoutWidget);
        selectArray->setObjectName("selectArray");

        verticalLayout_2->addWidget(selectArray);

        arraySizeInput = new QLineEdit(verticalLayoutWidget);
        arraySizeInput->setObjectName("arraySizeInput");

        verticalLayout_2->addWidget(arraySizeInput);


        verticalLayout->addLayout(verticalLayout_2);

        selectComplex = new QPushButton(verticalLayoutWidget);
        selectComplex->setObjectName("selectComplex");

        verticalLayout->addWidget(selectComplex);

        SelectPolinom = new QPushButton(verticalLayoutWidget);
        SelectPolinom->setObjectName("SelectPolinom");

        verticalLayout->addWidget(SelectPolinom);

        userinterface->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(userinterface);
        statusbar->setObjectName("statusbar");
        userinterface->setStatusBar(statusbar);
        menubar = new QMenuBar(userinterface);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuProgramm = new QMenu(menubar);
        menuProgramm->setObjectName("menuProgramm");
        userinterface->setMenuBar(menubar);

        menubar->addAction(menuProgramm->menuAction());

        retranslateUi(userinterface);

        QMetaObject::connectSlotsByName(userinterface);
    } // setupUi

    void retranslateUi(QMainWindow *userinterface)
    {
        userinterface->setWindowTitle(QCoreApplication::translate("userinterface", "MainWindow", nullptr));
        selectArray->setText(QCoreApplication::translate("userinterface", "Array", nullptr));
        arraySizeInput->setText(QString());
        selectComplex->setText(QCoreApplication::translate("userinterface", "Complex", nullptr));
        SelectPolinom->setText(QCoreApplication::translate("userinterface", "Polinom", nullptr));
        menuProgramm->setTitle(QCoreApplication::translate("userinterface", "Programm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userinterface: public Ui_userinterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINTERFACE_H
