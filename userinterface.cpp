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
    ui->elementInput->setValidator(validator);

    ui->clearArrayButton->hide();
}

userinterface::~userinterface()
{
    delete ui;
}



void userinterface::on_selectArray_clicked()
{
    if(methodInput==0||(dataInterfaceObj==nullptr)){
        ui->programMethod->setText("Selected: Array");
        bool ok;
        int sizeCreate= QInputDialog::getInt(this, "Input", "Write index: ", 0, 0, 100, 1, &ok);
        if (!ok) return;
        methodInput=1;
        dataInterfaceObj=new Arraycustom(sizeCreate);
        ui->clearArrayButton->show();
        ui->scrollArea_2->show();
        ui->scrollAreaOutput->show();

        ui->widget->show();
        ui->widget_2->show();
        ui->widget_4->show();
        ui->widget_7->show();
        ui->widget_8->show();
        ui->polinomW1->hide();


        refreshMenu();
    }
    if(methodInput==2){
        ui->clearArrayButton->show();

        ui->programMethod->setText("Selected: Array");
        ui->scrollAreaOutput->show();
        ui->widget->show();
        ui->widget_2->show();
        ui->widget_4->show();
        ui->widget_7->show();
        ui->widget_8->show();
        ui->polinomW1->hide();
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
    ui->EraseLine->clear();
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

void userinterface::on_clearArrayButton_clicked()
{
    delete dataInterfaceObj;
    removeAllWidgets();
    dataInterfaceObj=nullptr;
}





void userinterface::on_SelectPolinom_clicked()
{

    if(methodInput==0||methodInput==1){
        ui->programMethod->setText("Selected: Polinom");
        methodInput=2;
        dataPolinom=new TPolinom();


        ui->scrollArea_2->show();

        ui->scrollAreaOutput->show();


        // виджеты от arrayTools

        //сюда show на виджеты от polinom

        ui->clearArrayButton->hide();
        ui->widget->hide();
        ui->widget_2->hide();
        ui->widget_4->hide();
        ui->widget_7->hide();
        ui->widget_8->hide();
        ui->scrollAreaOutput->hide();
        // виджеты от arrayTools

    }
    else if(methodInput==2){
        ui->programMethod->setText("Selected: Polinom");
        ui->widget->hide();
        ui->widget_2->hide();
        ui->widget_4->hide();
        ui->widget_7->hide();
        ui->widget_8->hide();
        ui->polinomW1->show();


    }
}



void userinterface::on_getPolynomButton_clicked()
{
    if(dataPolinom!=nullptr&&methodInputSelected()){
        if(dataPolinom->getStringValue()!="0"){
    QMessageBox::information(nullptr, "Info", dataPolinom->getStringValue());
        }
        else{
            QMessageBox::information(nullptr, "Info", "Empty");
        }
    }
}




void userinterface::on_PolinomFromString_Button_clicked() {
    QString str = ui->PolinomInput_Line->text();
    if (str.isEmpty()) {
        QMessageBox::warning(nullptr, "Warning", "Error input");
        return;
    }

    dataPolinom->readPolinomFromQString(str);
    QMessageBox::information(nullptr, "Info", dataPolinom->getStringValue());
}



void userinterface::on_polinomTool2_clicked()
{

    //std::cout << "write a[0]\n";
    QString str=ui->polinomTool2_line->text();
    double a=str.toDouble();
    TPolinom pol(a);
    dataPolinom=new TPolinom(a);
    //std::cout << pol << "\n";

    QMessageBox::information(nullptr, "Info", dataPolinom->getStringValue());


}




/*void userinterface::on_polinomTool3_clicked()
{

        std::vector<double> rootz;
        QString input =ui->polinomTool3_line->text();
        double an=input.toDouble();
        ui->polinomTool3_line->clear();
        QMessageBox::information(nullptr, "Info", "Write degree");
        input =ui->polinomTool3_line->text();
        double deg=input.toDouble();
        ui->polinomTool3_line->clear();
        for(int i = 0; i < deg; i++){
            QMessageBox::information(nullptr, "Info", "Write roots");
            input =ui->polinomTool3_line->text();
            double root=input.toDouble();
            ui->polinomTool3_line->clear();
            rootz.push_back(root);
        }
        dataPolinom->ByRoots(an, rootz);
        QMessageBox::information(nullptr, "Info", dataPolinom->getStringValue());

}
*/
void userinterface::on_polinomTool3_clicked()
{
    std::vector<double> rootz;
    bool ok;
    double an = QInputDialog::getDouble(this, "Input", "Write an:", 0, 0, 100, 1, &ok);
    if (!ok) return;

    double deg = QInputDialog::getDouble(this, "Input", "Write degree:", 0, 0, 100, 1, &ok);
    if (!ok) return;

    for (int i = 0; i < deg; i++) {
        double root = QInputDialog::getDouble(this, "Input", "Write root " + QString::number(i + 1) + ":", 0, -10000, 10000, 1, &ok);
        if (!ok) return;
        rootz.push_back(root);
    }

    dataPolinom->ByRoots(an, rootz);
    QMessageBox::information(nullptr, "Info", dataPolinom->getStringValue());
}
//12






void userinterface::on_polinomTool4_clicked()
{
    dataPolinom->setPrintMode(PrintModeClassic);
    QMessageBox::information(nullptr, "Info", dataPolinom->getStringValue());
}
//13



void userinterface::on_polinomTool5_clicked()
{
    if (dataPolinom->eroot()){
        dataPolinom->setPrintMode(PrintModeRoot);
        QMessageBox::information(nullptr, "Info", dataPolinom->getStringValue());
    }
    else{
        QMessageBox::information(nullptr, "Error", "Error with polinom roots");
    }
}
//14



void userinterface::on_polinomTool6_clicked()
{
    bool ok;
    double an=QInputDialog::getDouble(this, "Input", "Write new an[n]: ", 0, 0, 100, 1, &ok);
    if (!ok) return;
    dataPolinom->set_an(an);
    dataPolinom->ByRoots(an,dataPolinom->getter_roots());
    QMessageBox::information(nullptr, "Info", dataPolinom->getStringValue());

}
//15





void userinterface::on_polinomTool7_clicked()
{
    bool ok;
    double ann = sqrt(dataPolinom->getter_an());
    double index=QInputDialog::getDouble(this, "Input", "Write index: ", 0, 0, 100, 1, &ok);
        if (!ok) return;
    double value=QInputDialog::getDouble(this, "Input", "Write value root: ", 0, 0, 100, 1, &ok);
                if (!ok) return;

    QMessageBox::information(nullptr, "Info", dataPolinom->getStringValue());
    dataPolinom->set_root(index,value);
    dataPolinom->ByRoots(ann,dataPolinom->getter_roots());

}
//16

void userinterface::on_polinomTool8_clicked()
{
    bool ok;
    double x=QInputDialog::getDouble(this, "Input", "Write x: ", 0, 0, 100, 1, &ok);
    if (!ok) return;
    QMessageBox::information(nullptr, "Info",dataPolinom->find_Val_PrintQString(x));
}
//17
