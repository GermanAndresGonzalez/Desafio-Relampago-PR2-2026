#include <iostream>
#include <string>


#include "ingresoDatos.h"

using namespace std;

int pedirDatos(int valor, string mensaje, int valorMinimo, int valorMaximo)
{
    int datos=0;
    do
    {
        cout << "\t\t" << mensaje << valor;
        if (valorMinimo != INT_MIN && valorMaximo != INT_MAX)
        {
            cout << " (" << valorMinimo << "-" << valorMaximo << ")"<< ": ";
        }
        else
        {
            cout << ": ";
        }
        cin >> datos;
    }
    while ((datos < valorMinimo)|| (datos > valorMaximo));

    return datos;
}
void reiniciarDatos(int matriz[4][4])
{
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
            matriz[i][j]=0;
    }
}

void mostrarMatriz(int matriz[4][4])
{
    cout << "\t\t\t   ";
    for (int i=0; i<4; i++)
    {
        cout << "J" << i+1 << " ";
    }
    cout << endl;
    for (int i=0; i<4; i++)
    {
        cout << "\t\t\tJ" << i+1 << " ";
        for (int j=0; j<4; j++)
        {
            if (i !=j)
            {
                cout << " " << matriz[i][j] << " ";
            }
            else
            {
                cout << " " << "-" << " ";
            }
        }
        cout << endl;
    }

    //system("pause");

}
void cargarMatriz(int matriz[4][4], int x, int y, int puntos)
{
    matriz[x][y]=puntos;

}


