#pragma once

#include "catch.hpp"
#include "chrup.hpp"
#include <iostream>

// tutaj klasy Ogorek, Zielony i Kiszony
class Ogorek
{
public:
    virtual std::string chrup() =0;
};

class Zielony : public Ogorek
{
public:
    std::string chrup() override 
    { 
        return Ogorek.chrupZielony();
    }
};

class Kiszony : public Ogorek
{
public:
    std::string chrup() override
    {
        return Ogorek.chrupKiszony(); 
    }
};

std::string jedzOgorek(Ogorek*)
{
    std::string tekst; 
    if (Ogorek* == Zielony) //
    {
        tekst = "Zielony: "; 
        return  tekst + chrupZielony();
    }

    if (Ogorek* == Kiszony)
    {
        tekst = "Kiszony: ";
        return tekst + chrupKiszony();
    }
}
