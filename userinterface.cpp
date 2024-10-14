#include "userinterface.h"
#include "ui_userinterface.h"

userinterface::userinterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::userinterface)
{
    ui->setupUi(this);
}

userinterface::~userinterface()
{
    delete ui;
}
