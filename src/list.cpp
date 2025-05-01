#include <iostream>
#include <string>
#include <list>

using namespace std;

class Persona{
    private:
        string nombre;
        int edad;

    public:
        Persona(string nombre, int edad){
            this->nombre = nombre;
            this->edad = edad;
        }
};

int main(int argc, char const *argv[]){
    
    list<string> nombres;

    nombres.push_back("Leonardo");
    nombres.push_back("Jeremy");
    nombres.push_back("Diego");
    nombres.push_back("Jorge");
    nombres.push_back("Manuel");
    nombres.push_back("Alex");

    list<int> edades;

    edades.push_back(21);
    edades.push_back(20);
    edades.push_back(18);
    edades.push_back(26);
    edades.push_back(14);
    edades.push_back(19);

    list<Persona> personas;

    for (auto it = nombres.begin(); it != nombres.end(); it++)
    {
        personas.push_back(Persona(
            *it,
            5
        ));
    }
    
    return 0;
}