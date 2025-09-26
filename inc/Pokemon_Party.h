//
// Created by guilh on 26/09/2025.
//

#ifndef TD1_INTRODUCTION_C___EX1_POKEMON_PARTY_H
#define TD1_INTRODUCTION_C___EX1_POKEMON_PARTY_H
#include <vector>

#include "Pokedex.h"


class Pokemon_Party:public Pokemon_Vector {
protected:
    vector<Pokemon> myPokemons;
public:
    explicit Pokemon_Party(const Pokemon_Vector *listOfPokemon);
    ~Pokemon_Party();
    void addPokemon(const Pokemon *newPokemon);
    void removePokemon(const Pokemon *newPokemon);

};


#endif //TD1_INTRODUCTION_C___EX1_POKEMON_PARTY_H