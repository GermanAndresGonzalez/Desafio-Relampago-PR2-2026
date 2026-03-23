#include <iostream>
#include <cstdlib>
#include <string>

#include "menus.h"
#include "varios.h"
#include "ingresoDatos.h"

using namespace std;

void menuOpciones()
{
    const int rayas=35;
    separador(rayas);
    cout << "\t\t" << "Torneo relámpago" << endl;
    cout << "\t\t" << "1. Cargar Puntos" << endl;
    cout << "\t\t" << "2. Mostrar Tabla" << endl;
    cout << "\t\t" << "3. Reiniciar Campeonato" << endl;
    separador(rayas);

    cout << "\t\t" << "4. Salir" << endl;
    separador(rayas);
}

int seleccionMenuPrincipal(int matriz[4][4])
{
    int opcion;
    system("cls");
    menuOpciones();
    cout << "\t\t";
    cin >> opcion;
    while (opcion <0 || opcion >4)
    {
        system("cls");
        menuOpciones();
        cout << "\t\t";
        cin >> opcion;
    }
    return opcion;
}

int menuCargarPuntos(int matriz[4][4])
{
    int rayas=70;
    int primerJugador,puntosPrimero;
    int segundoJugador, puntosSegundo;
    int opcion;

    string mensaje="";
    string mensaje2="";

    do
    {
        system("cls");
        separador(rayas);
        cout << "\t\tIngrese los datos de los dos jugadores que se enfrentaron" << endl;

        separador(rayas);

        cout << endl ;
        mensaje = "Ingrese el número de ID del jugador ";
        primerJugador = pedirDatos(1, mensaje,1,4);
        cout << endl;

        segundoJugador = pedirDatos(2, mensaje,1,4);
        cout << endl;
        separador(rayas);

        if (primerJugador== segundoJugador)
        {
            cout << endl <<"\t\tLos jugadores no pueden ser iguales.";
            cout << endl <<"\t\tPresione una tecla."<<endl;
            system("pause");
        }
    }
    while (primerJugador == segundoJugador);

    cout << endl;
    mensaje = "Ingrese los puntos jugador ";
    puntosPrimero = pedirDatos(1, mensaje);

    cout << endl;

    puntosSegundo = pedirDatos(2, mensaje);

    mensaje = "¿Los datos son correctos?";
    mensaje2 = "Correctos";
    opcion = realmenteDesea(mensaje, mensaje2, rayas=25);


    /*
    cout << endl << opcion;
    system("pause");
    */

    if (opcion==1)
    {
        cargarMatriz(matriz,primerJugador-1, segundoJugador-1, puntosPrimero);
        cargarMatriz(matriz,segundoJugador-1, primerJugador-1, puntosSegundo);
    }

    opcion=seleccionMenuPrincipal(matriz);
    ejecutarOpcion(opcion, matriz);


}
void menuMostrarTabla(int matriz[4][4])
{
    int rayas=30;
    system("cls");
    cout << endl << "\t";
    separador(rayas);
    cout << "\t\t\t"<< "Tabla de puntos";
    cout << endl << "\t";
    separador(rayas);
    mostrarMatriz(matriz);
    cout << "\t";
    separador(rayas);
    cout << endl << "Presione una tecla para continuar";
    cin.ignore();
    system("pause");
    int opcion=seleccionMenuPrincipal(matriz);
    ejecutarOpcion(opcion, matriz);


}
void menuReiniciarCampeonato(int matriz[4][4])
{
    int rayas=30;
    cout << endl << "\t\t";

    int opcion=realmenteDesea("¿Realmente desea reiniciar?", "Reiniciar", rayas);
    cout << endl << "\t\t";

    if (opcion==1)
    {
        reiniciarDatos(matriz);
    }
    opcion=seleccionMenuPrincipal(matriz);
    ejecutarOpcion(opcion, matriz);

}

int realmenteDesea(string mensaje, string mensaje2, int rayas)
{
    int opcion=0;

    do
    {
        system("cls");
        cout << endl << "\t";
        separador(rayas);
        cout << endl << "\t\t" << mensaje << endl;
        cout << endl<< "\t\t1. " << mensaje2 << endl;
        cout << "\t\t2. Volver" << endl;
        cout << endl << "\t";
        separador(rayas);
        cout << "\t\t";
        cin >> opcion;
    }
    while ((opcion <1) || (opcion >2));
    return opcion;

}
int menuSalir(int matriz[4][4])
{
    int opcion=realmenteDesea("¿Realmente desea salir?", "Salir");
    if (opcion==1)
    {
        system("cls");
        cout << "Saliendo...";
        exit;
    }
    if (opcion==2)
    {
        opcion=seleccionMenuPrincipal(matriz);
        ejecutarOpcion(opcion, matriz);
    }

}
void ejecutarOpcion(int opcion,int matriz[4][4])
{
    switch(opcion)
    {
    case 1:
        menuCargarPuntos(matriz);
        break;
    case 2:
        menuMostrarTabla(matriz);
        break;
    case 3:
        menuReiniciarCampeonato(matriz);
        break;
    case 4:
        menuSalir(matriz);
        break;
    }
}
