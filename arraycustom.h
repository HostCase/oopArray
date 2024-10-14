#ifndef ARRAYCUSTOM_H
#define ARRAYCUSTOM_H
#include <iostream>
#include "number.h"
#include <cmath>
#include <algorithm>
#include <stdlib.h>
class Arraycustom
{
public:
    Arraycustom(int size_);
    ~Arraycustom();
    number* data = nullptr;
    friend std::ostream& operator<< (std::ostream&, Arraycustom&);
    void fill_arr(int size);
    void change_size(int nsize);
    void erase(int index);
    int size;
    number middle_value();
    number SKO();
    void upToDown();
    void downToUp();
};

#endif // ARRAYCUSTOM_H
