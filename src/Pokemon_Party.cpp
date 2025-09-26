#include "../inc/Pokemon_Party.h"

using namespace std;

Pokemon_Party::Pokemon_Party(const Pokemon_Vector* listOfPokemons):myPokemons(listOfPokemon) {};
Pokemon_Party::~Pokemon_Party(){}


void Pokemon_Party::addPokemon(const Pokemon *pokemon){
    myPokemons.push_back(*pokemon);
}

void Pokemon_Party::removePokemon(const Pokemon *pokemon){
    int cpt = 0;
    for(Pokemon &p : myPokemons) {
        if (&p == pokemon) {
            myPokemons.erase(myPokemons.begin()+cpt);
        }
        cpt += 1;
    }
}