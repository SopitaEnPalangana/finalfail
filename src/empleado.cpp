#include <iostream>
#include "empleado.hpp"
#include "sucursal.hpp"

using namespace std;

class Sucursal;
void Empleado::setSucursal(string localidad){
    this->sucursal = localidad;
}
void Empleado::setSalario(double salario){
    this->salario = salario;
}
string Empleado::getNombre(){
    return this->nombre;
}
string Empleado::getDNI(){
    return this->DNI;
}
string Empleado::getSucursal(){
    return this->sucursal;
}
double Empleado::getSalario(){
    return this->salario;
}
void Empleado::mostrardatos(){
    cout << "***DATOS***" <<endl;
    cout << "Nombre: " << this->getNombre() << "  -   " << this->getDNI()<<endl;
    cout << "Sucursal: " << this->getSucursal() <<endl;
    cout << "Salario: " << this->getSalario() <<endl;
}