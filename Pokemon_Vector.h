#include "Pokemon.h"
#include <vector>

using std::vector;

class Pokemon_Vector {
private:
    vector<Pokemon> listName;
public:
    Pokemon findPokemonById(int id) const;
    Pokemon findPokemonByName( std::string name) const;
    void showList() const;
};


