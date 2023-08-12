#include <iostream>
#include "Complex.h"

using namespace complex;

int main()
{
    // How to make below possible? Currently, conversion error from Real to double is not possible.
    // use of copy constructor? Ref https://www.geeksforgeeks.org/copy-constructor-vs-assignment-operator-in-c/#
    // Real a = 13.45
    Complex *c1 = new Complex(1, 3);
    Complex *c2 = new Complex(2, 4);
    c1->display();
    c2->display();
}