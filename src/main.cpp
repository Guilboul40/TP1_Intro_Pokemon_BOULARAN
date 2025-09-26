#include "../inc/Pokemon.h"
#include <iostream>
using namespace std;



// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Pokemon pikachu("Pikachu",1,60,60,20,5,0);
    //Pokemon pikachu.copie(tiplouf);
    Pokemon salameche("Salameche",2,60,60,15,8,0);
    //Note: Le destructeur s'éxecute 2 fois après avoir affiché les attributs des 2 pokémons!?


    pikachu.strike(salameche);

    return 0;

}