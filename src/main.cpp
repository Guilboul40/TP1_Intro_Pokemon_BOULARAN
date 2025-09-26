#include "../inc/Pokemon.h"
#include "../inc/Pokedex.h"
#include "../inc/Pokemon_Party.h"

#include <iostream>
using namespace std;



// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Pokemon pikachu("Pikachu",1,60,60,20,5,0);
    //Pokemon pikachu.copie(tiplouf);
    Pokemon salameche("Salameche",2,60,60,15,8,0);
    Pokemon carapuce("Carapuce",3,55,55,25,8,0);


    pikachu.strike(salameche); //pikachu attaque salamèche: salamèche à désormais 48PV
    printf("Salameche a desormais %d PV\r\n",int(salameche.getLifePoint()));

    /*
    Pokedex encyclopedia(); //encyclopédie de tous les pokemons
    encyclopedia.showList();

    Pokemon_Party myPokedex(Pokemon_Vector *listOfPokemons);
    myPokedex.addPokemon(pikachu);
    myPokedex.addPokemon(salameche);
    myPokedex.addPokemon(carapuce);
    myPokedex.showList();

    myPokedex.removePokemon(pikachu);
    myPokedex.showList();
    */


    return 0;

}