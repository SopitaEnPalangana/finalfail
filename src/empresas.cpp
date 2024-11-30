#include <iostream>
#include "empresas.hpp"

using namespace std;

Empresas::Empresas(string nombre, string DNI){
    this->nombre = nombre;
    this->DNI = DNI;
}
void Empresas::trabajar(){
    cout << this->nombre << "esta vendiendo empresas" <<endl;
}