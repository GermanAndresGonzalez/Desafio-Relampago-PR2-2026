#pragma once


void menuOpciones();
int menuSalir(int matriz[4][4]);
int seleccionMenuPrincipal(int matriz[4][4]);
int menuCargarPuntos(int matriz[4][4]);

void ejecutarOpcion(int opcion,int matriz[4][4]);
void menuMostrarTabla(int matriz[4][4]);
void menuReiniciarCampeonato(int matriz[4][4]);

int realmenteDesea(std::string mensaje,std::string mensaje2, int rayas=25);

