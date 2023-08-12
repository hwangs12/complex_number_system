#include "Complex.h"

Complex::Complex(Real re, Real im)
{
    Complex::a = re;
    Complex::b = im;
}

Real Complex::getReal()
{
    return this->a;
}

Real Complex::getImaginary()
{
    return this->b;
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

    Real r1 = c1.getReal();
    Real r2 = c2.getReal();
    Real im1 = c1.getImaginary();
    Real im2 = c2.getImaginary();
    //
    temp.setReal(r1 + r2);
    temp.setImaginary(im1 + im2);

    return temp;
}
Complex operator-(Complex c1, Complex c2)
{
    Complex temp;

    Real r1 = c1.getReal();
    Real r2 = c2.getReal();
    Real im1 = c1.getImaginary();
    Real im2 = c2.getImaginary();

    temp.setReal(r1 - r2);
    temp.setImaginary(im1 - im2);

    return temp;
}
Complex operator*(Complex c1, Complex c2)
{
    Complex temp;

    Real r1 = c1.getReal();
    Real r2 = c2.getReal();
    Real im1 = c1.getImaginary();
    Real im2 = c2.getImaginary();

    temp.setReal(r1 * r2 - im1 * im2);
    temp.setImaginary(r1 * im2 + r2 * im1);

    return temp;
}
Complex operator/(Complex c1, Complex c2)
{
    Complex temp;

    Real r1 = c1.getReal();
    Real r2 = c2.getReal();
    Real im1 = c1.getImaginary();
    Real im2 = c2.getImaginary();
    // how it looks like
    // a+bi/(c+di) -> (a+bi)(c-di)/c^2+d^2 -> (ac+bd+(bc-ad)i)/(c^2+d^2)
    temp.setReal((r1 * r2 + im1 * im2) / (r2 * r2 + im2 * im2));
    temp.setImaginary((im1 * r2 - r1 * im2) / (r2 * r2 + im2 * im2));

    return temp;
}