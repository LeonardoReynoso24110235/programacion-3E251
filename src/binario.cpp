#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Persona{
    char nombre[50];
    int edad;
};

int main(int argc, char const *argv[]){

    //abrir el archivo binario para escritura
    ofstream archivo("binario.bin", ios::binary);

    //Verificar si el archivo se abrio
    if(!archivo.is_open()){
        cerr << "Error el Archivo no se Pudo encontrar" << endl;

        return 1;
    }

    cout << "Escribiendo en el Archivo..." << endl;

    //insertamos datos en los objetos
    Persona p1 = {"Leonardo", 21};
    Persona p2 = {"Jeremy", 19};
    Persona p3 = {"Manuel", 45};

    //escribimos en el archivo binario
    archivo.write(reinterpret_cast<char*>(&p1), sizeof(Persona));
    archivo.write(reinterpret_cast<char*>(&p2), sizeof(Persona));
    archivo.write(reinterpret_cast<char*>(&p3), sizeof(Persona));

    //cerramos el archivo
    archivo.close();

    //abrimos otra vez el archivo
    ifstream archivoLectura("binario.bin", ios::binary);

    if(!archivoLectura.is_open()){
        cerr << "Error el Archivo no se Pudo encontrar" << endl;

        return 1;
    }

    cout << "Leyendo el Archivo Binario..." << endl;

    //declaramos un objeto
    Persona p;

    //leemos el archivo
    while(archivoLectura.read(reinterpret_cast<char*>(&p), sizeof(Persona))){
        cout << "\nNombre: " << p.nombre << "\nEdad: " << p.edad << endl;
    }

    //cerramos el archivo
    archivoLectura.close();

    return 0;
}