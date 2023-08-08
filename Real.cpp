#include "Real.h";

Real::Real() : num(0) {}
Real::Real(const double &t) : num(t) {}
std::ostream &operator<<(std::ostream &out, Real a)
{
    std::cout << a.num << std::endl;
    return out;
}