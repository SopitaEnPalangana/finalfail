#include <iostream>
#include "profesional.hpp"
#include "sucursal.hpp"

using namespace std;

Profesional::Profesional(string nombre, string DNI){
    this->nombre = nombre;
    this->DNI = DNI;
}
void Profesional::trabajar(){
    cout << this->nombre << "esta vendiendo a profesionales" <<endl;
}

void Profesional::setSucursal(string localidad){
    this->sucursal = localidad;
}
void Profesional::setSalario(double salario){
    this->salario = salario;
}
string Profesional::getNombre(){
    return this->nombre;
}
string Profesional::getDNI(){
    return this->DNI;
}
string Profesional::getSucursal(){
    return this->sucursal;
}
double Profesional::getSalario(){
    return this->salario;
}
void Profesional::mostrardatos(){
    cout << "***DATOS***" <<endl;
    cout << "Nombre: " << this->nombre << "  -   " << this->DNI;
    cout << "Sucursal: " << this->getSucursal() <<endl;
    cout << "Salario: " << this->getSalario() <<endl;
}