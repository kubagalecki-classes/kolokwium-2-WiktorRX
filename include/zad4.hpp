#include "zad1.hpp"

#include <exception>
#include <iostream>
#include <vector>

// tutaj funkcja jedzOstatnieWarzywa
void jedzOstatnieWarzywa(const std::vector<Warzywo>& v, unsigned n, std::ostream& o)
{
    if (n >= v.size())
    {
        throw std::logic_error{"err"};
    }
    int dl = v.size();
    int x  = dl - n - 1;
    for (int i = dl-2; i >= x; i--)
    {
       v[i].opis(o);
    }
}
