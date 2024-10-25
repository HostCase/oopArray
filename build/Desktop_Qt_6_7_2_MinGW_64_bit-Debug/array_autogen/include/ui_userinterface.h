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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
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
    QPushButton *ChangeElement;
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
    QVBoxLayout *polinomTools;
    QWidget *polinomW1;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *PolinomInput_Line;
    QPushButton *PolinomFromString_Button;
    QWidget *polinomW1_2;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *polinomTool2_line;
    QPushButton *polinomTool2;
    QWidget *polinomW1_3;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *polinomTool3_line;
    QPushButton *polinomTool3;
    QLabel *programMethod;
    QStatusBar *statusbar;

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
        scrollAreaOutput->setGeometry(QRect(430, 40, 341, 331));
        scrollAreaOutput->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 339, 329));
        scrollAreaOutput->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(0, 340, 421, 181));
        scrollArea_2->setStyleSheet(QString::fromUtf8("\n"
"\n"
"font: 18pt \"Microsoft JhengHei\";"));
        scrollArea_2->setWidgetResizable(true);
        scrollContens_2 = new QWidget();
        scrollContens_2->setObjectName("scrollContens_2");
        scrollContens_2->setEnabled(true);
        scrollContens_2->setGeometry(QRect(0, -391, 405, 570));
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

        ChangeElement = new QPushButton(widget);
        ChangeElement->setObjectName("ChangeElement");
        ChangeElement->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 60, 255);\n"
""));

        horizontalLayout->addWidget(ChangeElement);


        arrayTools->addWidget(widget);

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
        GetSizeButton = new QPushButton(widget_7);
        GetSizeButton->setObjectName("GetSizeButton");
        GetSizeButton->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 60, 255);\n"
""));

        horizontalLayout_7->addWidget(GetSizeButton);


        arrayTools->addWidget(widget_7);


        verticalLayout_3->addLayout(arrayTools);

        polinomTools = new QVBoxLayout();
        polinomTools->setObjectName("polinomTools");
        polinomW1 = new QWidget(scrollContens_2);
        polinomW1->setObjectName("polinomW1");
        horizontalLayout_3 = new QHBoxLayout(polinomW1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        PolinomInput_Line = new QLineEdit(polinomW1);
        PolinomInput_Line->setObjectName("PolinomInput_Line");

        horizontalLayout_3->addWidget(PolinomInput_Line);

        PolinomFromString_Button = new QPushButton(polinomW1);
        PolinomFromString_Button->setObjectName("PolinomFromString_Button");

        horizontalLayout_3->addWidget(PolinomFromString_Button);


        polinomTools->addWidget(polinomW1);

        polinomW1_2 = new QWidget(scrollContens_2);
        polinomW1_2->setObjectName("polinomW1_2");
        horizontalLayout_5 = new QHBoxLayout(polinomW1_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        polinomTool2_line = new QLineEdit(polinomW1_2);
        polinomTool2_line->setObjectName("polinomTool2_line");

        horizontalLayout_5->addWidget(polinomTool2_line);

        polinomTool2 = new QPushButton(polinomW1_2);
        polinomTool2->setObjectName("polinomTool2");

        horizontalLayout_5->addWidget(polinomTool2);


        polinomTools->addWidget(polinomW1_2);

        polinomW1_3 = new QWidget(scrollContens_2);
        polinomW1_3->setObjectName("polinomW1_3");
        horizontalLayout_6 = new QHBoxLayout(polinomW1_3);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        polinomTool3_line = new QLineEdit(polinomW1_3);
        polinomTool3_line->setObjectName("polinomTool3_line");

        horizontalLayout_6->addWidget(polinomTool3_line);

        polinomTool3 = new QPushButton(polinomW1_3);
        polinomTool3->setObjectName("polinomTool3");

        horizontalLayout_6->addWidget(polinomTool3);


        polinomTools->addWidget(polinomW1_3);


        verticalLayout_3->addLayout(polinomTools);

        scrollArea_2->setWidget(scrollContens_2);
        programMethod = new QLabel(centralwidget);
        programMethod->setObjectName("programMethod");
        programMethod->setGeometry(QRect(20, 220, 161, 51));
        userinterface->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(userinterface);
        statusbar->setObjectName("statusbar");
        userinterface->setStatusBar(statusbar);

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
        getSKObutton->setText(QCoreApplication::translate("userinterface", "SKO", nullptr));
        upToDownSortButton->setText(QCoreApplication::translate("userinterface", "upToDown", nullptr));
        downToUpSortButton->setText(QCoreApplication::translate("userinterface", "downToUp", nullptr));
        GetSizeButton->setText(QCoreApplication::translate("userinterface", "GetSIZE", nullptr));
        PolinomFromString_Button->setText(QCoreApplication::translate("userinterface", "10", nullptr));
        polinomTool2->setText(QCoreApplication::translate("userinterface", "11", nullptr));
        polinomTool3->setText(QCoreApplication::translate("userinterface", "12", nullptr));
        programMethod->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class userinterface: public Ui_userinterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINTERFACE_H
