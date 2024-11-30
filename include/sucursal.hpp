#pragma once 
#include <iostream>
#include <list>
using namespace std;

class Empleado;

class Sucursal{
    private:
        string localidad;
        list<Empleado*> listaPersonal;
    public:
        Sucursal(string localidad);
        string getLocalidad();
        void mostrarPersonal();
        void contratar(Empleado* vendedor);
};