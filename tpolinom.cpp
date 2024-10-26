#include "tpolinom.h"
#include <qregularexpression.h>
#include <QDebug>
#include "tpolinom.h"
std::istream &operator>>(std::istream &is, TPolinom &pol) {

    pol.a.clear();
    pol.roots.clear();
    std::string input;
    std::getline(is, input);
    std::stringstream ss(input);
    char x, carrot;
    int coeff, power;
    while (ss >> coeff >> x >> carrot >> power) {
        if (power >= 0) {
            if (pol.a.size() <= power) {
                pol.setDegree(power);
            }
            pol.a[power] = coeff;
        }
        if (ss.peek() == '+') {
            ss.ignore();
        } else if (ss.peek() == '-') {
            ss.ignore();
        }
    }
    return is;
}
std::ostream &operator << (std::ostream &os,TPolinom &pol) {
    if (pol.printMode == PrintModeClassic){
        for (int i = pol.a.size() - 1; i >= 0; --i) {
            if (pol.a[i] != 0 || i == 0) {
                os << (pol.a[i] > 0 && i < pol.a.size() - 1 ? "+" : "")
                << pol.a[i] << "x^" << i << " ";
            }
        }
        return os;
    }
    else{
        os<<pol.a[pol.a.size()-1];
        for(int i = 0; i < pol.roots.size(); i++){
            os << "(x-" << pol.roots[i] << ")";
        }
        return os;
    }
}

void TPolinom::set_root(int index, double rt)
{
    roots[index] = rt;
}

void TPolinom::set_an(double newan)
{
    a[a.size()-1] = newan;
}

void TPolinom::setPrintMode(PRINTMODE m)
{
    printMode = m;
}

void TPolinom::setDegree(int degree)
{
    a.resize(degree + 1, 0);
}

TPolinom::TPolinom(std::vector<number> a_)
{
    for (int i = 0; i < a_.size(); i++){
        a.push_back(a_[i]);
    }
}

TPolinom::TPolinom()
{
    a.push_back(10);
    a.push_back(-7);
    a.push_back(1);
    roots.push_back(5);
    roots.push_back(2);
}

number TPolinom::find_Val(number asd)
{
    number ans;
    for (int i = a.size()-1; i > -1; i--){
        ans += a[i] * pow((asd),i);
    }
    return ans;
}

std::vector<double> TPolinom::getter_roots()
{
    return roots;
}

double TPolinom::getter_an()
{
    return a[a.size()-1];
}

bool TPolinom::eroot()
{
    return roots.empty();
}

void TPolinom::find_Val_Print(number numb)
{
    std::cout << "P(" << numb << ") = "<< find_Val(numb) << "\n";
}

void TPolinom::ByRoots(double k, std::vector<double> root)
{
    a.clear();
    //root.clear();
    roots = root;
    std::vector<double> coefficients = { 1.0 };

    for (double roots : root) {
        std::vector<double> newCoefficients(coefficients.size() + 1, 0);

        for (int j = 0; j < coefficients.size(); ++j) {
            newCoefficients[j] += coefficients[j];
            newCoefficients[j + 1] += coefficients[j] * (-roots);
        }

        coefficients = newCoefficients;
    }
    for (int i = coefficients.size()-1; i > -1; i--){
        a.push_back(coefficients[i]*k);
    }
    return;
}




QString TPolinom::getStringValue() {
    std::ostringstream oss;

    if (printMode == PrintModeClassic) {
        for (int i = a.size() - 1; i >= 0; --i) {
            if (a[i] != 0 || i == 0) {
                if (a[i] > 0 && i < a.size() - 1) {
                    oss << "+";
                }
                oss << a[i] << "x^" << i << " ";
            }
        }
    } else {
        oss << a[a.size() - 1];
        for (int i = 0; i < roots.size(); i++) {
            oss << "(x-" << roots[i] << ")";
        }
    }

    return QString::fromStdString(oss.str()).trimmed();
}





QString TPolinom::find_Val_PrintQString(number numb)
{
    QString str;
    QTextStream stream(&str);
    stream << "P(" << (numb) << ") = "<< (find_Val(numb));
    return str;
}



void TPolinom::readPolinomFromQString(const QString &input) {
    std::istringstream iss(input.toStdString());
    iss >> *this;
}
