#include <iostream>
#include "Real.h"

// use of namespace to utilize operator overloading outside class
// https://stackoverflow.com/questions/4121125/operator-overloading-outside-of-a-class

class Complex
{
    friend Complex operator+(Complex c1, Complex c2);
    friend Complex operator-(Complex c1, Complex c2);
    friend Complex operator*(Complex c1, Complex c2);
    friend Complex operator/(Complex c1, Complex c2);

private:
    Real a;
    Real b;

public:
    Complex(Real re = 0, Real im = 0);
    Real getReal();
    Real getImaginary();
    void setReal(Real re);
    void setImaginary(Real im);
    void display();
};
