#include <iostream>
#include <map>
#include <string>

using namespace std;

enum TipoPokemon{
    FUEGO,
    TIERRA,
    AGUA,
    ROCA,
    METAL,
    PHIQUICO,
    PLANTA,
    SINIESTRO,
    HADA,
    ELECTRICO,
    FANTASMA,
    NORMAL,
    FANTASMA,
    VOLADOR,
    ACERO,
    DRAGON,
    LUCHA,
    HIELO,
    BICHO,
    VENENO
};

class Pokemon{
    private:
        string nombre;
        int ataque;
        TipoPokemon tipo;

    public:
        Pokemon(string nombre, int ataque, TipoPokemon tipo){
            this->nombre = nombre;
            this->ataque = ataque;
            this->tipo = tipo;
        }
};

int main(int argc, char const *argv[]){

    map<int, Pokemon> pokedex;

    pokedex[1] = Pokemon("Bulbasour", 1, TipoPokemon::PLANTA);
    pokedex[2] = Pokemon("Ivisar", 2, TipoPokemon::PLANTA);
    pokedex[3] = Pokemon("Venusar", 3, TipoPokemon::PLANTA);
    pokedex[4] = Pokemon("Charmander", 1, TipoPokemon::FUEGO);
    pokedex[5] = Pokemon("Charmeleon", 2, TipoPokemon::FUEGO);
    pokedex[6] = Pokemon("Charizar", 3, TipoPokemon::FUEGO);
    pokedex[7] = Pokemon("Squirter", 1, TipoPokemon::AGUA);
    pokedex[8] = Pokemon("Waltortler", 2, TipoPokemon::AGUA);
    pokedex[9] = Pokemon("Blastoise", 3, TipoPokemon::AGUA);
    pokedex[10] = Pokemon("Pikachu", 1, TipoPokemon::ELECTRICO);
    pokedex[11] = Pokemon("Raychu", 2, TipoPokemon::ELECTRICO);
    pokedex[12] = Pokemon("Pinget", 1, TipoPokemon::VOLADOR);

    map<string, string> diccionario;

    diccionario["Programa"] = "Serie de algunos algoritmos";
    diccionario["Aleatorio"] = "Que depende del azar o de la casualidad";

    return 0;
}