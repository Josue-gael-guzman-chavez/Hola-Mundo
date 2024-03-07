#pragma once
#include <list>
#include <Dibujo.hpp>
using namespace std;

class Animacion
{
private:
    list<Dibujo> fotograma;
public:
    Animacion(list<Dibujo> fotogramas) {
        this->fotogramas = fotogramas;
    }
    ~Animacion() {}
    void Reproducir(){
        for (auto &&dibujo : this->fotogramas)
        {
            dibujo.Dibujar();
        }
        
    }


};