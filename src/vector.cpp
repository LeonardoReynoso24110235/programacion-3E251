#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]){
    
    vector<string> nombres;

    nombres.emplace_back("Martha");
    nombres.emplace_back("Leo");
    nombres.emplace_back("Maria");
    nombres.emplace_back("Fer");
    nombres.emplace_back("Memo");

    cout << nombres.at(4) << endl;

    for (auto &&nombre : nombres)
    {
        cout << nombre << endl;
    }
    
    return 0;
}