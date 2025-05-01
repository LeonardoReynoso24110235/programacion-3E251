#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(int argc, char const *argv[]){

    set<int> conjunto1 = {1, 2, 3, 4};
    set<int> conjunto2 = {1, 2};

    set<int> conjuntos;

    conjuntos.insert(conjunto1.begin(), conjunto1.end());
    conjuntos.insert(conjunto2.begin(), conjunto2.end());

    cout << "Numero de Elementos en el conjunto 1 = " << conjunto1.size() << endl;
    cout << "Numero de Elementos en el conjunto 2 = " << conjunto2.size() << endl;
    cout << "Numero de Elementos en el conjunto 3 = " << conjuntos.size() << endl;

    return 0;
}