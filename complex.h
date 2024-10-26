#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <qobject.h>
#include <ctype.h>
#include <cmath>
class Complex
{
public:
    //Конструкторы
    Complex();
    Complex(double real_);
    Complex(double real_, double img_);
    Complex(QString);
    //атрибуты

    //операторы
    Complex& operator=(const Complex& other);
    Complex &operator=(double r);
    Complex operator*(const Complex &other) const;
    Complex operator*(double other) const;
    Complex& operator+=(const Complex& other);
    Complex& operator/=(const double &other);
    Complex operator /(const double &other);
    Complex operator -(const Complex &other);
    bool operator  <(const Complex &other) const;
    bool operator  <(int other) const;
    bool operator  >(const Complex &other) const;
    bool operator  >(int other) const;
    operator double() const;
    //дружесские функции
    friend Complex operator +(const Complex &left, const Complex &right );
    friend std::ostream & operator <<( std::ostream &os, const Complex &c );
    friend std::istream& operator>> (std::istream& out, Complex& x);
    friend double arg(Complex x);
    QString getStringValue();
private:
    double real;
    double img;
};

#endif // COMPLEX_H
