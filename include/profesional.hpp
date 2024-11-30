#pragma once
#include <iostream>
#include "empleado.hpp"

using namespace std;

class Profesional : public Empleado{
    private:
        string nombre;
        string DNI;
        string sucursal;
        double salario;
    public:
        Profesional(string nombre, string DNI);
        void trabajar() override;
        void setSucursal(string localidad);
        void setSalario(double salario);
        string getNombre();
        string getDNI();
        string getSucursal();
        double getSalario();
        void mostrardatos();
};