
#include <iostream>
#include "Pokemon_Vector.h"

#include <vector>


using namespace std;

//Ajout d'un Pokemon dans la liste

Pokemon Pokemon_Vector::findPokemonById(int id) const{
    for (Pokemon p : listName) {
        if (p.getId() == id) {
            return p;
        }
    }
    return Pokemon ("Aucun Pokemon",0,0,0,0,0,0);
}
Pokemon Pokemon_Vector::findPokemonByName( std::string name) const{
    for (Pokemon p : listName) {
        if (p.getName() == name) {
            return p;
        }
    }
    return Pokemon ("Aucun Pokemon",0,0,0,0,0,0);
}
void Pokemon_Vector::showList() const{
    for (Pokemon p: listName) {
        std::cout << p.getName() << std::endl;
    }
}
