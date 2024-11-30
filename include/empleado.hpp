#pragma once
#include <iostream>
#include <list>

using namespace std;

class Sucursal;

class Empleado{
    private:
        string nombre;
        string DNI;
        string sucursal;
        double salario;
    public:
        virtual void trabajar() = 0;
        void setSucursal(string localidad);
        void setSalario(double salario);
        string getNombre();
        string getDNI();
        string getSucursal();
        double getSalario();
        void mostrardatos();
};