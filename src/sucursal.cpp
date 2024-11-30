#include <iostream>
#include "sucursal.hpp"
#include "empleado.hpp"

using namespace std;

Sucursal::Sucursal(string localidad){
    this->localidad = localidad;
}
string Sucursal::getLocalidad(){
    return this->localidad;
}
void Sucursal::mostrarPersonal(){
    cout << "-------------------------" <<endl;
    cout << "SUCURSAL " << this->getLocalidad() <<endl;
    for(Empleado* vendedor : this->listaPersonal){
        vendedor->mostrardatos();
    }
}
void Sucursal::contratar(Empleado* vendedor){
    cout << "contratando personal" <<endl;
    cout << vendedor->getNombre() << " - " << vendedor->getDNI() <<endl;
    vendedor->setSucursal(this->localidad);
    cout << vendedor->getSucursal();
    double monto;
    cout << "Ingrese el salario del empleado: ";
    cin >> monto;
    vendedor->setSalario(monto);
    this->listaPersonal.push_back(vendedor);
    cout << "Empleado contratado en sucursal " << this->localidad <<endl;
}