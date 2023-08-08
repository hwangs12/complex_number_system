#include <iostream>

class Real
{
private:
    double num;

public:
    Real();
    Real(const double &t);
    friend std::ostream &operator<<(std::ostream &out, Real a);
};
