#include "userinterface.h"
#include "ui_userinterface.h"
#include "arraycustom.h"
#include "complex.h"
#include "tpolinom.h"
userinterface::userinterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::userinterface)
{
    ui->setupUi(this);
    setWindowTitle("OOP4");


    ui->arraySizeInput->setPlaceholderText("Array size");
    QIntValidator *validator = new QIntValidator(this);
    ui->arraySizeInput->setValidator(validator);
}

userinterface::~userinterface()
{
    delete ui;
}


void userinterface::on_selectArray_clicked()
{
    QString str=ui->arraySizeInput->text();
    int size= str.toInt();
    runningStructure = new Arraycustom(size);


    ui->arraySizeInput->clear();
}


void userinterface::on_arraySizeInput_editingFinished()
{
    on_selectArray_clicked();
}

