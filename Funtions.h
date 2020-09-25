#ifndef FUNTIONS_H_INCLUDED
#define FUNTIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>

#include "Listas.h"

void cargarArchivo (char ruta[],persona persona);

///CARGA POR ARCHIVO
//en orden
nodo * subprogramaIngresaPersonaEnListaOrden(nodo * lista, persona p);
nodo * cargarListaDesdeArchivo_Orden(char Ruta[], nodo * lista);
// por el principio
nodo * subprogramaIngresaPersonaEnListaPPio(nodo * lista, persona p);
nodo * cargarListaDesdeArchivo_Ppio(char Ruta[], nodo * lista);

int buscarNodo_simple_xNmbre(nodo * lista, char buscar[]);
///Buscar nodo por edad
int buscarNodo_simple_xEdad (nodo * lista, int buscar);
///Subporgrma que responde si se encuentra o no en la lista
void subprogramaDeterminar_Exitencia_Nodo_Buscado(int edad);

void CargaLista (nodo * lista, char rutaBin[]);
//INTERCARLAR
nodo * IntercalarLista (nodo * listaA, nodo * listaB, nodo * listaC);
//INVERTIR
nodo * InvertirListas(nodo * lista);
///Borrar el ultimo nodo de la lista
nodo * borrasUltimoNodo (nodo * lista);

void MostarArchivo (char ruta[]);
void menu();
int EleccionEjercicio();


nodo * guardarLista(nodo * lista, persona p);
nodo * cargarLista(nodo * lista);
#endif // FUNTIONS_H_INCLUDED
