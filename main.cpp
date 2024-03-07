#include <iostream>
#include <Alimento.hpp>
#include <Mascota.hpp>
#include <Dibujo.hpp>
#include <Animacion.hpp>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
    Mascota firulais, mascota;
    Alimento carne(10);

    firulais.Comer(carne);

    firulais.Jugar();
    firulais.Jugar();
    firulais.Jugar();

    cout
    <<"Vida de firulais"
    << firulais.LeerVida()
    << endl;

    Dibujo dibujo;("./assets/Dogi.txt");   
    Dibujo dibujo2;("./assets/Apache.txt");

    list<Dibujo> dibujos;
    dibujo.push_back(dibujo);
    dibujo.push_back(dibujo2);

    Animacion animacion(dibujos);
    animacion. Reproducir();


    return 0;
}
