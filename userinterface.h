#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "arraycustom.h"
#include "tpolinom.h"
#include <QMainWindow>
#include <QValidator>
#include <qboxlayout.h>
#include <QMessageBox>
#include <QTextStream>
#include <QInputDialog>
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


    void on_upToDownSortButton_clicked();

    void on_downToUpSortButton_clicked();

    void on_SelectPolinom_clicked();

    void on_PolinomFromString_Button_clicked();


    void on_polinomTool2_clicked();

    void on_polinomTool3_clicked();

    void on_polinomTool4_clicked();

    void on_clearArrayButton_clicked();

    void on_polinomTool5_clicked();

    void on_getPolynomButton_clicked();

    void on_polinomTool6_clicked();

    void on_polinomTool7_clicked();

    void on_polinomTool8_clicked();

private:
    Ui::userinterface *ui;
    QVBoxLayout *lay;
    int methodInput = 0;
    Arraycustom* dataInterfaceObj=nullptr;
    TPolinom* dataPolinom=nullptr;
};

#endif // USERINTERFACE_H
