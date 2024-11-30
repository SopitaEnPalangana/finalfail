#pragma once
#include <iostream>
#include "empleado.hpp"

using namespace std;

class Particular : public Empleado{
    private:
        string nombre;
        string DNI;
        string sucursal;
        double salario;
    public:
        Particular(string nombre, string DNI);
        void trabajar() override;

};