#pragma once

#include "Pokemon.h"
#include <vector>

using std::vector;

class Pokemon_Vector {
protected:
    vector<Pokemon> listOfPokemon;
public:
    Pokemon findPokemonById(int id) const;
    Pokemon findPokemonByName( std::string name) const;
    void showList() const;
};


