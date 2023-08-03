#include <iostream>
#include "Real.h"

// use of namespace to utilize operator overloading outside class
// https://stackoverflow.com/questions/4121125/operator-overloading-outside-of-a-class
namespace complex
{

    class Complex
    {
    private:
        Real a;
        Real b;

    public:
        Complex(Real re, Real im);
        void display();
    };
    //
    Complex operator+(const Complex &a, const Complex &b);
    Complex operator-(const Complex &a, const Complex &b);
    Complex operator*(const Complex &a, const Complex &b);
    Complex operator/(const Complex &a, const Complex &b);
}