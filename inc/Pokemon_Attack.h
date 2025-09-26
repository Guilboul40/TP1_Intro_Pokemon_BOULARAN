//
// Created by guilh on 26/09/2025.
//

#ifndef TD1_INTRODUCTION_C___EX1_POKEMON_ATTACK_H
#define TD1_INTRODUCTION_C___EX1_POKEMON_ATTACK_H

#include "Pokemon_Vector.h"
#include "Pokemon_Party.h"

class Pokemon_Attack: public Pokemon_Vector {
protected:
    double size;
    vector<Pokemon_Vector> pokemonSelected;
public:
    Pokemon_Attack(double size, Pokemon_Party myPokemons);
    ~Pokemon_Attack();
    void returnPokemonToInventary(Pokemon_Vector pokemon);

};


#endif //TD1_INTRODUCTION_C___EX1_POKEMON_ATTACK_H