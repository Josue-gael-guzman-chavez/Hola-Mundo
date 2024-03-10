#include <iostream>
using namespace std;

class Personaje
{
private:
    
public:
    Personaje() {}
    ~Personaje() {}
    void Hablar(){
        cout<<"Hola enanx"<<endl;
    }
};

class Duende
{
private:
    int salud;
public:
    Duende() {}
    ~Duende() {}
};

class Enano : public Personaje
{
private:
    float altura;
    int edad;
    int vida;
    float altura;
    int edad;

public:
    Enano() {}
    ~Enano() {}
    void Inicializar(){
        this->altura = 2;
        this->edad = 150;
        this->
    }

};

int main(int argc, char const *argv[]){

int i =5;
bool b =true;
float f = 0.1;
double d = 0.1;
char c = 'a';
Enano e;

cout<<"Tamaño tipos de datos masivo: "<<endl;
cout<<"Tamaño int:"<<sizeof(int)<<" bytes."<<endl;
cout<<"Tamaño bool:"<<sizeof(bool)<<" bytes."<<endl;
cout<<"Tamaño float:"<<sizeof(float)<<" bytes."<<endl;
cout<<"Tamaño double:"<<sizeof(double)<<" bytes."<<endl;
cout<<"Tamaño char:"<<sizeof(char)<<" bytes."<<endl;
cout<<"Tamaño Enano:"<<sizeof(Enano)<<" bytes."<<endl;

cout<<endl;
cout<<"Memoria Estatica C/C++:"<<endl;
cout<<"Direccion de int: "<<&i<<endl;
cout<<"Direccion de bool: "<<&b<<endl;
cout<<"Direccion de float: "<<&f<<endl;
cout<<"Direccion de double: "<<&d<<endl;
cout<<"Direccion de char: "<<static_cast<void*>(&c)<<endl;
cout<<"Direccion de Enano: "<<&e<<endl;


cout<<endl;
cout<<"Tamaño "<<sizeof(int)<<" bytes."<<endl;
cout<<"Direccion Dinamica:"<<malloc(2)<<endl;
cout<<"Direccion Dinamica int"<<malloc(sizeof(int))<<endl;

//casteo de punteros en C
Enano* direccion =(Enano*) malloc(sizeof(Enano));
direccion->Inicializar();

//punteros en C++
Enano* instancia = new Enano;
instancia

//operador
instancia->Comer();
instancia->Hablar();

//polimorgismo
Personaje* p = new Duende();
Personaje* q = new Enano();

p->Hablar();
q->Hablar();

cout<<"Direccion de p:" <<p<<endl;

//arreglos
Duende duendes[10];
cout<<endl;
cout<<&duendes[0]<<endl;
cout<<&duendes[1]<<endl;
cout<<&duendes[2]<<endl;
cout<<&duendes[3]<<endl;
cout<<&duendes[4]<<endl;

//convesion a direccion
cout<<endl;<<duendes+0<<endl;
cout<<duendes+1<<endl;
cout<<duendes+2<<endl;
cout<<duendes+3<<endl;
cout<<duendes+5<<endl;


return 0;
}