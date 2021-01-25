#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Warzywo
class Warzywo
{
public:
    Warzywo(const std::string& n, double c, int k)
    {
        nazwa = n;
        cena  = c;
        kolor = k;
        liczba++;
    }
    ~Warzywo() { liczba--; }
    static unsigned getVeg() { return liczba; }
    void opis(std::ostream& s) const { s << nazwa << ": " << cena << ", " << kolor << "\n"; }
    // w1.opis(s1);
    // CHECK(s1.str() == "cukinia: 2.1, 42\n");

private:
    std::string nazwa;
    double      cena;
    int         kolor;
    inline static unsigned liczba = 0; // const???



};
