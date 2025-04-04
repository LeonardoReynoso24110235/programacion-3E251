#include <iostream>

using namespace std;

int main (){

    cout << "\t--- Tipos ---" << endl;
    cout << "int: " << sizeof(int) << " bits" << endl;
    cout << "char: " << sizeof(char) << " bits" << endl;
    cout << "float: " << sizeof(float) << " bits" << endl;
    cout << "double: " << sizeof(double) << " bits" << endl;
    cout << "bool: " << sizeof(bool) << " bits" << endl;

    cout << "\n\t--- Operdor Direccion ---" << endl;
    int a = 74;
    int b = 185;

    cout << "Direccion de Memoria A: " << &a << endl;
    cout << "Direccion de Memoria B: " << &b << endl;

    int* direccion = &a;

    cout << "Direccion: " << direccion << endl;
    cout << "Direccion: " << *direccion << endl;
    cout << "Direccion: " << &direccion << endl;
    cout << "Direccion: " << sizeof(direccion) << endl;
}