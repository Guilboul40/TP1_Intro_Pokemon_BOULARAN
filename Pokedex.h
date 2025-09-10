#include "Pokemon_Vector.h";

using std::string;

class Pokedex: public Pokemon_Vector {
private:
    Pokedex()=delete;
    Pokedex(const string fileName);
    ~Pokedex();
public:
    void copy(const Pokemon_Vector);    
};
