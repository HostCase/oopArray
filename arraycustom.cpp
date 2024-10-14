#include "arraycustom.h"
Arraycustom::Arraycustom(int size_ = 5): size(size_){
    if (size > 0){
        data = new number[size];
        int value = 0;
        for (int i = 0; i < size; i++){
            data[i] = value;
            value++;
        }
    }
}

Arraycustom::~Arraycustom()
{
    delete[] data;
}

void Arraycustom::fill_arr(int size)
{
    for (number *start = data; start <=data+size-1; start++) {

        number b;
        std::cin >> b;
        *start = b;
    }
}

void Arraycustom::change_size(int nsize)
{
    number* newarr = new number[nsize];
    if (nsize > size){
        for(int i = 0; i < size; i++){
            newarr[i] = data[i];
        }
        for(int i = size; i < nsize; i++){
            newarr[i] = 0;
        }
        delete[] data;

        data = newarr;
        size = nsize;

    }
    else{
        for(int i = 0; i < nsize;i++){
            newarr[i] = data[i];
        }
        delete[] data;

        data = newarr;
        size = nsize;
    }
    /*
    number *newData = new number[nsize];
    delete[] data;
    data = new number[nsize];
    size = nsize;
    */
}

void Arraycustom::erase(int index)
{
    if (index <= size-1 && index >= 0){
        number *newarr = new number[size-1];
        for(int i = 0; i < size-1; i++){
            if (i < index){
                newarr[i] = data[i];
            }
            else{
                newarr[i] = data[i+1];
            }
        }

        --size;
        delete[] data;
        data = newarr;
        std::cout << data << "\n";
        //delete[] newarr;

    }
    else{
    std::cout <<"error index out of range\n";
    return;
    }
}

number Arraycustom::middle_value()
{
    number ans = 0;
    for(int i = 0; i < size; i++){
        ans += data[i];
    }
    return ans/size;
}

number Arraycustom::SKO()
{
    number sum = 0;
    number sr_zn=0;
    for (int i = 0; i < size; i++){
        sum += data[i];
    }
    sum /= size;
    for(int i = 0; i < size; i++){
        sr_zn += (data[i] - sum)*(data[i]-sum);
    }
    number del = pow(size-1,-1);
    return sqrt(del*sr_zn);
}

void Arraycustom::upToDown()
{
    if (size > 1) {
        std::sort(data, data + size, std::greater<number>());
    }
}

void Arraycustom::downToUp()
{
    if (size > 1) {
        std::sort(data, data + size);
    }
}
std::ostream& operator << (std::ostream& os, Arraycustom& arr)
{
    if (arr.size == 0){

        os << "array is empty\n";
        return os;
    }
    for (number* start = arr.data; start <= arr.data+arr.size-1; start++){
        os << *start << " ";
    }
    os << "\n";
    return os;
}
