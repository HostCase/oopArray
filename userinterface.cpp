#include "userinterface.h"
#include "ui_userinterface.h"
#include "arraycustom.h"
#include "complex.h"
userinterface::userinterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::userinterface)
{
    ui->setupUi(this);
    setWindowTitle("OOP4");

    lay = new QVBoxLayout(ui->scrollAreaWidgetContents);
    lay->setSpacing(2);
    ui->scrollAreaWidgetContents->setLayout(lay);
    ui->scrollArea_2->hide();
    ui->scrollAreaOutput->hide();
    QIntValidator *validator = new QIntValidator(this);
    ui->arraySizeInput->setValidator(validator);
    ui->elementInput->setValidator(validator);
}

userinterface::~userinterface()
{
    delete ui;
}



void userinterface::on_selectArray_clicked()
{
    if(methodInput==0){
        ui->programMethod->setText("Selected: Array");
        QString str=ui->arraySizeInput->text();
        int sizeCreate= str.toInt();
        ui->arraySizeInput->clear();
        methodInput=1;
        dataInterfaceObj=new Arraycustom(sizeCreate);
        ui->scrollArea_2->show();
        ui->scrollAreaOutput->show();

        //виджеты в тулсах
        ui->widget->show();
        ui->widget_2->show();
        ui->widget_4->show();
        ui->widget_7->show();
        ui->widget_8->show();
        //хайднуть полиномовские

        refreshMenu();
    }
    if(methodInput==2){
        ui->programMethod->setText("Selected: Array");
        ui->scrollAreaOutput->show();
        ui->widget->show();
        ui->widget_2->show();
        ui->widget_4->show();
        ui->widget_7->show();
        ui->widget_8->show();
        methodInput=1;
        refreshMenu();
    }
}

void userinterface::on_arraySizeInput_returnPressed()
{
    on_selectArray_clicked();
}





void userinterface::removeAllWidgets() {
    while (QLayoutItem* item = lay->takeAt(0)) {
        if (QWidget* widget = item->widget()) {
            lay->removeWidget(widget);
            delete widget;
        }
        delete item;
    }
}

void userinterface::refreshMenu(){
    if(methodInputSelected()){
        removeAllWidgets();
        for(int i=0;i<dataInterfaceObj->getSize();i++){
            QString value = dataInterfaceObj->getElement(i);
            addWidget(value);
        }
    }
    else{
        QMessageBox::information(nullptr, "Warning", "Only for array ");
    }

}


void userinterface::addWidget(const QString& inputToWidget) {
    QLabel* newLabel = new QLabel(inputToWidget, ui->scrollAreaWidgetContents);
    newLabel->setFixedSize(150, 30);
    lay->addWidget(newLabel);
}



bool userinterface::methodInputSelected(){
    if(methodInput){
        return 1;
    }
    else{
        QMessageBox::critical(nullptr, "Error", "Choose method");
        return 0;
    }
}

void userinterface::on_EraseButton_clicked()
{
    if(methodInput){
    QString str=ui->EraseLine->text();
    ui->EraseLine->clear();
    int pos= str.toInt();
    dataInterfaceObj->erase(pos);
    ui->arraySizeInput->clear();
    refreshMenu();
    }
}




void userinterface::on_GetSizeButton_clicked()
{
    if(methodInputSelected()){
        int size = dataInterfaceObj->getSize();
        QMessageBox::information(nullptr, "Size", "Size is " + QString::number(size));
    }
}




void userinterface::on_ChangeElement_clicked()
{
    if(methodInput){
    QString strIndex = ui->elementInput->text();
    QString str = ui->lineforChangeRealInput->text();
    int index=strIndex.toInt();
    dataInterfaceObj->ChangeElementInArray(str,index);


    refreshMenu();
}
}



void userinterface::on_getSKObutton_clicked()
{
    if(methodInput){
    QString str;
    QTextStream stream(&str);
    number SKO =dataInterfaceObj->SKO();
    stream <<SKO;
    QMessageBox::information(nullptr, "SKO", str);
    }
}




void userinterface::on_upToDownSortButton_clicked()
{
    if(methodInput){
    dataInterfaceObj->upToDown();
    refreshMenu();
    }
}


void userinterface::on_downToUpSortButton_clicked()
{
    if(methodInput){
    dataInterfaceObj->downToUp();
    refreshMenu();
    }
}






void userinterface::on_SelectPolinom_clicked()
{

    if(methodInput==0||methodInput==1){
        ui->programMethod->setText("Selected: Polinom");
        QString str=ui->arraySizeInput->text();
        int sizeCreate= str.toInt();
        ui->arraySizeInput->clear();
        methodInput=2;
        dataInterfaceObj=new Arraycustom(sizeCreate);
        refreshMenu();
        ui->scrollArea_2->show();

        ui->scrollAreaOutput->show();


        // виджеты от arrayTools

        //сюда show на виджеты от polinom


        ui->widget->hide();
        ui->widget_2->hide();
        ui->widget_4->hide();
        ui->widget_7->hide();
        ui->widget_8->hide();
        ui->scrollAreaOutput->hide();
        // виджеты от arrayTools

    }
    if(methodInput==2){
        ui->programMethod->setText("Selected: Polinom");
        ui->widget->hide();
        ui->widget_2->hide();
        ui->widget_4->hide();
        ui->widget_7->hide();
        ui->widget_8->hide();
        methodInput=2;
        refreshMenu();
    }
}




