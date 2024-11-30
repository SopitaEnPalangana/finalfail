#pragma once
#include <iostream>
#include "empleado.hpp"

using namespace std;

class Empresas : public Empleado{
    private:
        string nombre;
        string DNI;
        string sucursal;
        double salario;
    public:
        Empresas(string nombre, string DNI);
        void trabajar() override;
};