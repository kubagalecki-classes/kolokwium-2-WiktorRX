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
        return chrupZielony();
    }
};

class Kiszony : public Ogorek
{
public:
    std::string chrup() override
    {
        return chrupKiszony(); 
    }
};

std::string jedzOgorek(Ogorek *O)
{

    std::string tekst; 
    if (typeid(*O) == typeid(Zielony))
    {
        tekst = "Zielony: "; 
        return  tekst + chrupZielony();
    }

    if (typeid(*O) == typeid(Kiszony))
    {
        tekst = "Kiszony: ";
        return tekst + chrupKiszony();
    }
}
