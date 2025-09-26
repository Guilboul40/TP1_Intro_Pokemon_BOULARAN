//
// Created by guilh on 10/09/2025.
//

#include "../inc/Pokedex.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

Pokedex* Pokedex::pinstance{nullptr};
Pokedex::Pokedex() {
    int cmpt=0;
    std::ifstream fichier("pokedex.csv");
    if (!fichier.is_open()) {
        std::cerr << "Impossible d'ouvrir le fichier : " << "../pokedex.csv" << std::endl;
        return;
    }
    std::string ligne;
    while (std::getline(fichier, ligne)) {
        std::stringstream ss(ligne);
        std::string cellule;
        std::vector<std::string> data;
        while (std::getline(ss, cellule, ',')) {
            data.push_back(cellule);
        }

        if (cmpt!=0) {
            int id=std::stoi(data[0]);
            string name=data[1];
            double lifePointMax=std::stod(data[5]);
            double defense=std::stod(data[7]);
            double attack=std::stod(data[9]);
            int evolution=std::stoi(data[11]);

            Pokemon pokemonData(name,id,lifePointMax,lifePointMax,attack,defense,evolution);
            listOfPokemon.push_back(pokemonData);
        }
        cmpt++;
    }
    fichier.close();
}

Pokedex *Pokedex::getInstance() {
    if (pinstance==nullptr) {
        pinstance=new Pokedex();
    }
    else {
        cout<<"Instance already existing"<<endl;
    }
    return pinstance;
}

