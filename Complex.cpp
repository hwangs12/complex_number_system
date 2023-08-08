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

void Complex::display()
{
    std::cout << this->a << " + " << this->b << "i" << std::endl;
}

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    Real re1 = c1.a;
    Real re2 = c2.a;
}
Complex operator-(Complex c1, Complex c2)
{
}
Complex operator*(Complex c1, Complex c2)
{
}
Complex operator/(Complex c1, Complex c2)
{
}