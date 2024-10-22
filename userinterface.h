#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "arraycustom.h"
#include <QMainWindow>
#include <QValidator>
#include <qboxlayout.h>
#include <QMessageBox>
#include <QTextStream>
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


    void removeAllWidgets();

    void refreshMenu();

    bool methodInputSelected();

    void addWidget(const QString& inputToWidget);

    void on_EraseButton_clicked();

    void on_GetSizeButton_clicked();

    void on_arraySizeInput_returnPressed();

    void on_ChangeElement_clicked();

    void on_getSKObutton_clicked();

private:
    Ui::userinterface *ui;
    QVBoxLayout *lay;
    int methodInput = 0;
    Arraycustom* dataInterfaceObj;
};

#endif // USERINTERFACE_H
