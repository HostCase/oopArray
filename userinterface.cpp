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

    QIntValidator *validator = new QIntValidator(this);
    ui->arraySizeInput->setValidator(validator);
    ui->elementInput->setValidator(validator);
    ui->lineforChangeImagineInput->setValidator(validator);
    ui->lineforChangeRealInput->setValidator(validator);
}

userinterface::~userinterface()
{
    delete ui;
}



void userinterface::on_selectArray_clicked()
{
    QString str=ui->arraySizeInput->text();
    int sizeCreate= str.toInt();
    ui->arraySizeInput->clear();
    methodInput=1;
    dataInterfaceObj=new Arraycustom(sizeCreate);
    refreshMenu();
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
    QString str=ui->EraseLine->text();
    ui->EraseLine->clear();
    int pos= str.toInt();
    dataInterfaceObj->erase(pos);
    ui->arraySizeInput->clear();
    refreshMenu();
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
    QString strIndex = ui->elementInput->text();
    QString strReal = ui->lineforChangeRealInput->text();
    QString strImagine = ui->lineforChangeImagineInput->text();
    double real=strReal.toDouble();
    double imagine=strImagine.toDouble();
    int index=strIndex.toInt();
    if (dataInterfaceObj->getSize() > 0) { // Убедитесь, что массив не пуст
        dataInterfaceObj->data[index] = Complex(real,imagine); // Записываем значение в первую позицию
    } else {
        // Обработка случая, когда массив пуст
        qDebug() << "Массив data пуст!";
    }

    refreshMenu(); // Обновляем меню после изменения данных
}



void userinterface::on_getSKObutton_clicked()
{
    QString str;
    QTextStream stream(&str);
    number SKO =dataInterfaceObj->SKO();
    stream <<SKO;
    QMessageBox::information(nullptr, "SKO", str);
}

