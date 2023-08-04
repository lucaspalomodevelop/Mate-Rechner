#include "./mate.cpp"
#include "../../module.hpp"

#include <iostream>
#include <string>
#include <functional>

class MateRechner : public Module
{
public:
    MateRechner() : Module("Mate-Rechner", "Rechnet den Koffeingehalt von Mate aus")
    {
        this->setInit(mateMain);
    }
};