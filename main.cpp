#include <iostream>

#include "ingresoDatos.h"

#include "menus.h"

using namespace std;

int main()
{
    int opcion;
    int matriz[4][4]{};

    opcion=seleccionMenuPrincipal(matriz);
    ejecutarOpcion(opcion,matriz);

    /*
    mostrarMatriz(matriz);
    reiniciarDatos(matriz);
    */


    return 0;
}
