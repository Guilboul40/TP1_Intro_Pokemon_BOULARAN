//
// Created by guilh on 26/09/2025.
//

#ifndef TD1_INTRODUCTION_C___EX1_DIFFERENT_STATE_H
#define TD1_INTRODUCTION_C___EX1_DIFFERENT_STATE_H

#include "State.h"

using namespace std;


class Home_Page : public State {
public:
    void handle() override {
        cout << "Bienvenue dans Pocket Monsters" << endl;
        cout << "Appuyez sur la touche P pour commencer à jouer" << endl;
        string key;
        cin >> key;
        if (key == "P") {
            Action::setState(new Exploring());    // Je ne comprends pas pourquoi cela ne fonctionne pas
            // Le constructeur de la classe State est bien public donc je ne vois pas ce qui empêche les
            // DifferentState de générer leur Etat.
        }
    }
};

// État EnMarche
class Exploring : public State {
public:
    void handle() override {
        cout << "Partons à l'exploration!!" << endl;
    }
};

// État HorsService
class BattleFight : public State {
public:
    void handle() override {
        cout << "Que le combat commence." << endl;
    }
};

class FindingPokemon : public State {
public:
    void handle() override {
        cout << "Vous avez rencontré un Pokémon, souhaitez-vous le capturer?" << endl;
    }
};

class GameOver : public State {
public:
    void handle() override {
        cout << "GAME OVER : Vous avez perdu votre combat" << endl;
        cout << "Appuyer sur B pour retourner à la page d'accueil" << endl;
    }
};


#endif //TD1_INTRODUCTION_C___EX1_DIFFERENT_STATE_H