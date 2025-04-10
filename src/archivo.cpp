#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]){

    //abrir el archivo de escritura
    ofstream archivo("archivo.txt");

    if(!archivo.is_open()){
        cerr << "Error al Abrir el Archivo de Escritura." << endl;
        return 1;
    }

    cout << "Escribiendo en el Archivo...\n" << endl;
    archivo << "HOLA MUNDO" << endl;

    for(int i = 0; i < 6; i++){
        archivo << "Linea " << i+1 << endl;
    }
    
    //abrir el archivo
    ifstream archivoLectura("archivo.txt");
    
    if(!archivoLectura.is_open()){
        cerr << "Error al Abrir el Archivo de Escritura." << endl;
        return 1;
    }

    cout << "Leyendo del Archivo...\n" << endl;

    string linea;

    while(getline(archivoLectura, linea)){
        cout << linea << endl;
    }

    //cerrar el archivo
    archivo.close();

    return 0;
}