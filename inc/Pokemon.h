#pragma once
#include <iostream>

class Pokemon {
private:
    std::string name;
    int id;
    double lifePointMax;
    double lifePoint;
    double attack;
    double defense;
    int evolution=0;
    //static int countPokemon;   //Problème de compilation lorsqu'on ajoute les lignes faisant référence à countPokemon
    //A voir où est-ce qu'il faut placer le static je pense.

public:
    Pokemon()=delete;
    Pokemon(const std::string &name, int id, double lifePointMax, double lifePoint, double attack, double defense, int evolution);
    void displayInfo() const;
    ~Pokemon();

    //Partie 2 - A partir du nom d'un Pokemon, on peut récupérer ses attributs
    std::string getName() const;
    int getId() const;
    double getLifePoint() const;
    double getLifePointMax() const;
    double getAttack() const;
    double getDefense() const;
    int getEvolution() const;

    void strike(Pokemon& anotherPokemon);

};