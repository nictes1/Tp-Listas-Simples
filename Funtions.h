#ifndef FUNTIONS_H_INCLUDED
#define FUNTIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>

#include "Listas.h"



void cargarArchivo (char ruta[],persona persona);
nodo* archivo_A_lista(char ruta[], nodo* lista);
nodo * subprogramaIngresaPersonaEnListaOrden(nodo * lista, persona p);
nodo * cargarListaDesdeArchivo_Orden(char Ruta[], nodo * lista);
nodo * subprogramaIngresaPersonaEnListaPPio(nodo * lista, persona p);
nodo * cargarListaDesdeArchivo_Ppio(char Ruta[], nodo * lista);
int buscarNodo_simple_xNmbre(nodo * lista, char buscar[]);
int buscarNodo_simple_xEdad (nodo * lista, int buscar);
void subprogramaDeterminar_Exitencia_Nodo_Buscado(int edad);
void CargaLista (nodo * lista, char rutaBin[]);
nodo * IntercalarLista (nodo * listaA, nodo * listaB, nodo * listaC);
nodo * InvertirListas(nodo * lista);
nodo * EliminarNodosEspecificos (nodo * lista, int buscar);
void MostarArchivo (char ruta[]);
int buscaDatoArchi(char dato[], char ruta[]);
void menu();
int EleccionEjercicio();





#endif // FUNTIONS_H_INCLUDED
