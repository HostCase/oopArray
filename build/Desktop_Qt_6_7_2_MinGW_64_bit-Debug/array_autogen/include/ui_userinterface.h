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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
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
    QPushButton *SelectPolinom;
    QScrollArea *scrollAreaOutput;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *scrollArea_2;
    QWidget *scrollContens_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QVBoxLayout *arrayTools;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *EraseLine;
    QPushButton *EraseButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *elementInput;
    QLineEdit *lineforChangeRealInput;
    QLineEdit *lineforChangeImagineInput;
    QPushButton *ChangeElement;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *PushFrontLine;
    QPushButton *PushFrontButton;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *InsertPosition;
    QLineEdit *InsertValue;
    QPushButton *InsertButton;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *getSKObutton;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *upToDownSortButton;
    QPushButton *downToUpSortButton;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *GetSizeButton;
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
        verticalLayoutWidget->setGeometry(QRect(20, 20, 160, 141));
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

        SelectPolinom = new QPushButton(verticalLayoutWidget);
        SelectPolinom->setObjectName("SelectPolinom");

        verticalLayout->addWidget(SelectPolinom);

        scrollAreaOutput = new QScrollArea(centralwidget);
        scrollAreaOutput->setObjectName("scrollAreaOutput");
        scrollAreaOutput->setGeometry(QRect(390, 50, 341, 331));
        scrollAreaOutput->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 339, 329));
        scrollAreaOutput->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(-10, 290, 401, 231));
        scrollArea_2->setStyleSheet(QString::fromUtf8("\n"
"\n"
"font: 18pt \"Microsoft JhengHei\";"));
        scrollArea_2->setWidgetResizable(true);
        scrollContens_2 = new QWidget();
        scrollContens_2->setObjectName("scrollContens_2");
        scrollContens_2->setEnabled(true);
        scrollContens_2->setGeometry(QRect(0, -281, 385, 510));
        verticalLayout_3 = new QVBoxLayout(scrollContens_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(scrollContens_2);
        label->setObjectName("label");
        label->setAutoFillBackground(false);

        verticalLayout_3->addWidget(label);

        arrayTools = new QVBoxLayout();
        arrayTools->setObjectName("arrayTools");
        widget_2 = new QWidget(scrollContens_2);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        EraseLine = new QLineEdit(widget_2);
        EraseLine->setObjectName("EraseLine");

        horizontalLayout_2->addWidget(EraseLine);

        EraseButton = new QPushButton(widget_2);
        EraseButton->setObjectName("EraseButton");
        EraseButton->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 60, 255);\n"
""));

        horizontalLayout_2->addWidget(EraseButton);


        arrayTools->addWidget(widget_2);

        widget = new QWidget(scrollContens_2);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        elementInput = new QLineEdit(widget);
        elementInput->setObjectName("elementInput");

        horizontalLayout->addWidget(elementInput);

        lineforChangeRealInput = new QLineEdit(widget);
        lineforChangeRealInput->setObjectName("lineforChangeRealInput");

        horizontalLayout->addWidget(lineforChangeRealInput);

        lineforChangeImagineInput = new QLineEdit(widget);
        lineforChangeImagineInput->setObjectName("lineforChangeImagineInput");

        horizontalLayout->addWidget(lineforChangeImagineInput);

        ChangeElement = new QPushButton(widget);
        ChangeElement->setObjectName("ChangeElement");
        ChangeElement->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 60, 255);\n"
""));

        horizontalLayout->addWidget(ChangeElement);


        arrayTools->addWidget(widget);

        widget_6 = new QWidget(scrollContens_2);
        widget_6->setObjectName("widget_6");
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        PushFrontLine = new QLineEdit(widget_6);
        PushFrontLine->setObjectName("PushFrontLine");

        horizontalLayout_6->addWidget(PushFrontLine);

        PushFrontButton = new QPushButton(widget_6);
        PushFrontButton->setObjectName("PushFrontButton");
        PushFrontButton->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 60, 255);\n"
""));

        horizontalLayout_6->addWidget(PushFrontButton);


        arrayTools->addWidget(widget_6);

        widget_3 = new QWidget(scrollContens_2);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        InsertPosition = new QLineEdit(widget_3);
        InsertPosition->setObjectName("InsertPosition");

        horizontalLayout_3->addWidget(InsertPosition);

        InsertValue = new QLineEdit(widget_3);
        InsertValue->setObjectName("InsertValue");

        horizontalLayout_3->addWidget(InsertValue);

        InsertButton = new QPushButton(widget_3);
        InsertButton->setObjectName("InsertButton");
        InsertButton->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 60, 255);\n"
""));

        horizontalLayout_3->addWidget(InsertButton);


        arrayTools->addWidget(widget_3);

        widget_4 = new QWidget(scrollContens_2);
        widget_4->setObjectName("widget_4");
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        getSKObutton = new QPushButton(widget_4);
        getSKObutton->setObjectName("getSKObutton");
        getSKObutton->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 60, 255);\n"
""));

        horizontalLayout_4->addWidget(getSKObutton);


        arrayTools->addWidget(widget_4);

        widget_8 = new QWidget(scrollContens_2);
        widget_8->setObjectName("widget_8");
        horizontalLayout_8 = new QHBoxLayout(widget_8);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        upToDownSortButton = new QPushButton(widget_8);
        upToDownSortButton->setObjectName("upToDownSortButton");
        upToDownSortButton->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 60, 255);\n"
""));

        horizontalLayout_8->addWidget(upToDownSortButton);

        downToUpSortButton = new QPushButton(widget_8);
        downToUpSortButton->setObjectName("downToUpSortButton");
        downToUpSortButton->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 60, 255);\n"
""));

        horizontalLayout_8->addWidget(downToUpSortButton);


        arrayTools->addWidget(widget_8);

        widget_7 = new QWidget(scrollContens_2);
        widget_7->setObjectName("widget_7");
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");

        arrayTools->addWidget(widget_7);


        verticalLayout_3->addLayout(arrayTools);

        GetSizeButton = new QPushButton(scrollContens_2);
        GetSizeButton->setObjectName("GetSizeButton");
        GetSizeButton->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 60, 255);\n"
""));

        verticalLayout_3->addWidget(GetSizeButton);

        scrollArea_2->setWidget(scrollContens_2);
        userinterface->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(userinterface);
        statusbar->setObjectName("statusbar");
        userinterface->setStatusBar(statusbar);
        menubar = new QMenuBar(userinterface);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        SelectPolinom->setText(QCoreApplication::translate("userinterface", "Polinom", nullptr));
        label->setText(QCoreApplication::translate("userinterface", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Tools</span></p></body></html>", nullptr));
        EraseButton->setText(QCoreApplication::translate("userinterface", "Erase", nullptr));
        ChangeElement->setText(QCoreApplication::translate("userinterface", "InputElement", nullptr));
        PushFrontButton->setText(QCoreApplication::translate("userinterface", "PushFront", nullptr));
        InsertButton->setText(QCoreApplication::translate("userinterface", "Insert", nullptr));
        getSKObutton->setText(QCoreApplication::translate("userinterface", "SKO", nullptr));
        upToDownSortButton->setText(QCoreApplication::translate("userinterface", "upToDown", nullptr));
        downToUpSortButton->setText(QCoreApplication::translate("userinterface", "downToUp", nullptr));
        GetSizeButton->setText(QCoreApplication::translate("userinterface", "GetSIZE", nullptr));
        menuProgramm->setTitle(QCoreApplication::translate("userinterface", "Programm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userinterface: public Ui_userinterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINTERFACE_H
