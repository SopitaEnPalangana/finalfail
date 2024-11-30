#include <iostream>
#include "particular.hpp"

using namespace std;

Particular::Particular(string nombre, string DNI){
    this->nombre = nombre;
    this->DNI = DNI;
}
void Particular::trabajar(){
    cout << this->nombre << "esta vendiendo a particulares" <<endl;
}