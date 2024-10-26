#include "complex.h"
#include "arraycustom.h"
#include <qfloat16.h>
double arg(Complex x){
    if (x.real > 0){
        return atan(x.img/x.real);
    }
    if (x.real < 0 &&x.img >= 0){
        return atan(x.img/x.real) + M_PI;
    }
    if (x.real < 0 &&x.img < 0){
        return atan(x.img/x.real) - M_PI;
    }
    if (x.real == 0 &&x.img > 0){
        return M_PI/2;
    }
    if (x.real == 0 &&x.img < 0){
        return (M_PI/2)*(-1);
    }
    return 0;
}
Complex::Complex()
    : real(0.0)
    , img(0.0)
{
}
Complex::Complex(double real_ = 0.0 , double img_ = 0.0) : real(real_), img(img_) {}
Complex::Complex(double real_) : real(real_), img(0.0) {}
Complex &Complex::operator=(double r) {
    real = r;
    img = 0.0;
    return *this;
}

Complex Complex::operator*(const Complex &other) const
{
    return Complex(real*other.real-img*other.img,
                   real*other.img-img*other.real);
}
Complex Complex::operator*(double other) const
{
                                                return Complex(real*other,
                   img*other);
}
Complex &Complex::operator+=(const Complex &other)
{
    Complex temp(*this);
    real=temp.real + other.real;
    img=temp.img + other.img;
    return (*this);
}
Complex &Complex::operator/=(const double &other)
{
    Complex temp(*this);
    real=temp.real / other;
    img=temp.img / other;
    return (*this);
}
Complex Complex::operator/(const double &other)
{
    return Complex(real/other, img/other);
}

Complex Complex::operator -(const Complex &other)
{
    return Complex(real-other.real, img-other.img);
}

bool Complex::operator <(int other) const
{
    return (this->real) <  other;
}
bool Complex::operator <(const Complex &other) const
{
    return arg(*this) <  arg(other);
}
bool Complex::operator >(const Complex &other) const
{
    return arg(*this) >  arg(other);
}
bool Complex::operator  >(int other) const
{
    return (this->real) >  other;
}

Complex::operator double() const
{
    return real;
}
Complex &Complex::operator=(const Complex &other)
{
    if(this != &other)
    {
        real=other.real;
        img=other.img;
    }
    return *this;

}

Complex operator +( const Complex &left, const Complex &right )
{
    return { left.real + right.real, left.img + right.img };
}

std::ostream & operator <<( std::ostream &os, const Complex &c )
{
    if (c.img > 0){
        return os << c.real << "+" << c.img << "i ";
    }
    if (c.img < 0){
        return os << c.real << c.img << "i ";
    }
    else{
        return os << c.real;
    }
}

std::istream& operator>> (std::istream& in, Complex& x){

    std::string input_string;
    in >> input_string;

    std::size_t pos = input_string.rfind("+");
    if (pos!=std::string::npos){
        std::string left = input_string.substr(0,pos);
        std::string right = input_string.substr(pos);
        x.real = std::stod(left);
        x.img = std::stod(right);
        return in;
    }
    pos = input_string.rfind("-");
    if (pos!=std::string::npos){
        std::string left = input_string.substr(0,pos);
        std::string right = input_string.substr(pos);
        x.real = std::stod(left);
        x.img = std::stod(right);
        return in;
    }
    return in;
}


QString Complex::getStringValue(){
    QString str;
    QTextStream stream(&str);

    if (img > 0){
        stream << real << "+" << img << "i ";
    }
    else if (img < 0){
        stream << real << img << "i ";
    }
    else{
        stream << real;
    };
    return str;
}


Complex::Complex(QString str) {
    std::string input_string = str.toStdString();
    std::size_t pos = input_string.find("+");

    if (pos != std::string::npos) {
        std::string left = input_string.substr(0, pos);
        std::string right = input_string.substr(pos + 1); // пропускаем '+'
        real = std::stod(left);
        img = std::stod(right);
    } else {
        pos = input_string.find("-");
        if (pos != std::string::npos) {
            std::string left = input_string.substr(0, pos);
            std::string right = input_string.substr(pos); // оставляем '-' в строке
            real = std::stod(left);
            img = std::stod(right);
        } else {
            // Если строка не содержит ни '+' ни '-', то можно установить значения по умолчанию
            real = std::stod(input_string);
            img = 0.0;
        }
    }
};

