#pragma once
#include "Pokemon_Vector.h"


class Pokedex: public Pokemon_Vector{
private:
    Pokedex();
    static Pokedex* pinstance;
public:
    static Pokedex* getInstance();
};
