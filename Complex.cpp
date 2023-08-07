#include "Complex.h"

using namespace complex;

Complex::Complex(Real re = 0, Real im = 0)
{
    Complex::a = re;
    Complex::b = im;
}

Real Complex::getReal()
{
    return Complex::a;
}

Real Complex::getImaginary()
{
    return Complex::b;
}

void Complex::setReal(Real re_)
{
    a = re_;
}

void Complex::setImaginary(Real im_)
{
    b = im_;
}

Complex operator+(const Complex &a, const Complex &b)
{
    Complex temp;
}
Complex operator-(const Complex &a, const Complex &b)
{
}
Complex operator*(const Complex &a, const Complex &b)
{
}
Complex operator/(const Complex &a, const Complex &b)
{
}