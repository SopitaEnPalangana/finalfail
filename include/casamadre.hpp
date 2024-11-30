#pragma once
#include <iostream>
#include "sucursal.hpp"
#include "empleado.hpp"
using namespace std;

class CasaMadre{
    private:
        string nombre;
    public:
        CasaMadre(string nombre);
        void notificar(Empleado* vendedor);
};