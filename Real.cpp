#include "Real.h"

Real::Real() : num(0) {}
Real::Real(const double &t) : num(t) {}

Real operator+(Real c1, Real c2)
{
    Real temp;
    temp.num = c1.num + c2.num;
    return temp;
}
Real operator-(Real c1, Real c2)
{
    Real temp;
    temp.num = c1.num - c2.num;
    return temp;
}
Real operator*(Real c1, Real c2)
{
    Real temp;
    temp.num = c1.num * c2.num;
    return temp;
}
Real operator/(Real c1, Real c2)
{
    Real temp;
    temp.num = c1.num / c2.num;
    return temp;
}

std::ostream &operator<<(std::ostream &out, Real a)
{
    std::cout << a.num << std::endl;
    return out;
}