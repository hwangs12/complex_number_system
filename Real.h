#include <iostream>

class Real
{
    friend Real operator+(Real c1, Real c2);
    friend Real operator-(Real c1, Real c2);
    friend Real operator*(Real c1, Real c2);
    friend Real operator/(Real c1, Real c2);

private:
    double num;

public:
    Real();
    Real(const double &t);
    friend std::ostream &operator<<(std::ostream &out, Real a);
};
