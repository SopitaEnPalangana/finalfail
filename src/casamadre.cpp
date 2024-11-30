#include <iostream>
#include "casamadre.hpp"
using namespace std;

CasaMadre::CasaMadre(string nombre){
    this->nombre = nombre;
}
void CasaMadre::notificar(Empleado* vendedor){
    string pedido;
    cout << "Ingrese pedido para " << vendedor->getNombre() << ":";
    getline(cin,pedido);
    cout << pedido;
}
