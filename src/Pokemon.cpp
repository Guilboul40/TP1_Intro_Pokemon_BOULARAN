//
// Created by guilh on 08/09/2025.
//
#include <iostream>
using namespace std;
#include "../inc/Pokemon.h"

//Initialisation des variables
Pokemon::Pokemon(const string &name, int id,double lifePointMax, double lifePoint, double attack, double defense, int evolution):
name(name),id(id),lifePointMax(lifePointMax),lifePoint(lifePoint),attack(attack),defense(defense),evolution(evolution){
        //countPokemon+=1;
        cout << "Ici le constructeur Initialisateur" << endl;
        Pokemon::displayInfo();
}


void Pokemon::displayInfo() const {
        cout << "Pokemon ID:" << id << endl;
        cout << "Pokemon Name:" << name << endl;
        cout << "Pokemon LifePoint:" << lifePoint << "/" << lifePointMax << endl;
        cout << "Pokemon Attack:" << attack << endl;
        cout << "Pokemon Defense:" << defense << endl;
        cout << "Pokemon Generation:" << evolution << endl;
}

Pokemon::~Pokemon() {
        //countPokemon = countPokemon - 1;
        cout << "Ici le Destructeur" << endl;
}

//Partie 2
string Pokemon::getName() const {
        return name;
}
int Pokemon::getId() const {
        return id;
}
double Pokemon::getLifePoint() const {
        return lifePoint;
}
double Pokemon::getLifePointMax() const {
        return lifePointMax;
}
double Pokemon::getAttack() const {
        return attack;
}
double Pokemon::getDefense() const {
        return defense;
}
int Pokemon::getEvolution() const {
        return evolution;
}

void Pokemon::strike(Pokemon& anotherPokemon) {
        if (attack > anotherPokemon.defense) {
                anotherPokemon.lifePoint -= attack - anotherPokemon.defense;
                cout << "You attacked an opponent's Pokemon" << endl;
                if (anotherPokemon.lifePoint <= 0) {
                        anotherPokemon.lifePoint = 0;
                        cout << "You have killed a Pokemon" << endl;
                        //countPokemon = countPokemon - 1;
                }
                else cout << "He has now " << anotherPokemon.lifePoint << " Life Points" << endl;
        }
}

