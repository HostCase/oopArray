#ifndef ARRAYCUSTOM_H
#define ARRAYCUSTOM_H
#include <iostream>
#include "number.h"
#include <cmath>
#include <algorithm>
#include <qobject.h>
#include <QTextStream>
#include <stdlib.h>
class Arraycustom
{
public:
    Arraycustom(int size_);
    ~Arraycustom();

    friend std::ostream& operator<< (std::ostream&, Arraycustom&);
    void fill_arr(int size);
    void change_size(int nsize);
    void erase(int index);
    number middle_value();
    number SKO();
    void upToDown();
    void downToUp();
    QString getElement(const int& index);
    int getSize() ;
    void ChangeElementInArray(QString str,int index);
private:
    int size;
    number* data = nullptr;
};

#endif // ARRAYCUSTOM_H
