#ifndef TPOLINOM_H
#define TPOLINOM_H
#include <iostream>
#include "number.h"
#include <vector>
#include <cstdarg>
#include <string>
#include <map>
#include <sstream>
#include <cmath>
enum PRINTMODE{
    PrintModeClassic,
    PrintModeRoot,
};
enum WRITEMODE{
    WriteModeClassic,
    WriteModeRoot,
};
class TPolinom
{
    WRITEMODE WriteMode;
    PRINTMODE printMode = PrintModeClassic;
public:
    void set_root(int index, double rt);
private:

    std::vector<number> a;
    std::vector<double> roots;
public:
    void set_an(double newan);
    void setPrintMode(PRINTMODE m);
    void setDegree(int degree);
    //std::map<int, number> coef;
    TPolinom(std::vector<number> a_);
    TPolinom();
    template<typename... Args>
    TPolinom(Args... args) {
        a = {args...};
    }
    number find_Val(number asd);
    std::vector<double> getter_roots();

    double getter_an();
    bool eroot();
    void find_Val_Print(number numb);
    void ByRoots(double k, std::vector<double> root);
    friend std::ostream &operator << (std::ostream &os,TPolinom &pol);
    friend std::istream &operator >> (std::istream &is,TPolinom &pol);
    friend QTextStream &operator<<(QTextStream &stream, const TPolinom &pol);
    void readPolinomFromQString(const QString &input);
    QString getStringValue();
    QString find_Val_PrintQString(number numb);
};

#endif // TPOLINOM_H
