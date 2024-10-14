#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <QMainWindow>
#include <QValidator>
#include "datainterface.h"
namespace Ui {
class userinterface;
}

class userinterface : public QMainWindow
{
    Q_OBJECT

public:
    explicit userinterface(QWidget *parent = nullptr);
    ~userinterface();

private slots:


    void on_selectArray_clicked();

    void on_arraySizeInput_editingFinished();

private:
    Ui::userinterface *ui;
    datainterface* runningStructure;
};

#endif // USERINTERFACE_H
