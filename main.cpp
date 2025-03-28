#include "Foco.hpp"
#include "Serie.hpp"
#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
#include <iostream>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    auto Pantalla = Screen::Create(
        ftxui::Dimension::Full(),
        Dimension::Full()
    );

    auto Documento = vbox(
        spinner(21,1)
    );

    Render(Pantalla, Documento);
    Pantalla.Print();

    Foco foco1;
    Foco foco2;
    Serie serieNavidenia;

    foco1.Encender();
    foco2.Apagar();

    foco1.Imprimir();
    foco2.Imprimir();

    serieNavidenia.Imprimir();
    serieNavidenia.EncenderTodo();
    serieNavidenia.Imprimir();
    serieNavidenia.ApagarTodo();
    serieNavidenia.Imprimir();
    serieNavidenia.ApagarCantidad(10);
    serieNavidenia.Imprimir();
    serieNavidenia.EncenderCantidad(3);
    serieNavidenia.Imprimir();
    serieNavidenia.AlternarEncendido();
    serieNavidenia.Imprimir();
    serieNavidenia.RecorrerDerecha();
    serieNavidenia.Imprimir();
    serieNavidenia.RecorrerIzquierda();
    serieNavidenia.Imprimir();

    return 24110235;
}