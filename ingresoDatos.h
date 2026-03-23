#pragma once
#include <limits>

int pedirDatos(int valor, std::string mensaje, int valorMinimo = INT_MIN, int valorMaximo = INT_MAX);
void reiniciarDatos(int matriz[4][4]);

void mostrarMatriz(int matriz[4][4]);
void cargarMatriz(int matriz[4][4], int x, int y, int puntos);

int pedirJugador(int valor, std::string mensaje);
int pedirPuntos();

