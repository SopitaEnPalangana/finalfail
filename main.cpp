#include <iostream>
#include "casamadre.hpp"
#include "sucursal.hpp"
#include "empleado.hpp"
#include "empresas.hpp"
#include "particular.hpp"
#include "profesional.hpp"
using namespace std;


int main(){
    CasaMadre* Sopita = new CasaMadre("Sopitas");

    //add empleados
    Sucursal* MardelPlata = new Sucursal("Mar del Plata");
    Sucursal* Miramar = new Sucursal("Miramar");
    list<Empleado*> listaPersonal;

    Particular* particular1 = new Particular("fulano", "123456");
    MardelPlata->contratar(particular1);

    Profesional* profesional1 = new Profesional("mengano", "168713");
    MardelPlata->contratar(profesional1);

    Empresas* empresas1 = new Empresas("pingano", "687513");
    MardelPlata->contratar(empresas1);

    Particular* particular2 = new Particular("Maria", "798321");
    Miramar->contratar(particular2);

    Profesional* profesional2 = new Profesional("Pedro Pascal", "168713");
    Miramar->contratar(profesional2);

    Empresas* empresas2 = new Empresas("Sergio Aguero", "6876546");
    Miramar->contratar(empresas2);

    MardelPlata->mostrarPersonal();
    Miramar->mostrarPersonal();

    particular1->trabajar();

    //enviar pedidos
    Sopita->notificar(empresas1);

    //liberar memoria
    delete particular1;
    delete particular2;
    delete profesional1;
    delete profesional2;
    delete empresas1;
    delete empresas2;
    delete MardelPlata;
    delete Miramar;
    delete Sopita;

    return 0;
}