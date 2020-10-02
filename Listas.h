#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Persona.h"

///Prototipado, Estructuras
typedef struct _nodo
{
    persona dato;
    struct nodo * siguiente;
} nodo;


//FuncionesBasicasListas//
nodo *InicioLista ();
nodo *CrearNodo(persona dato);
nodo *AgregarPricipio (nodo *lista, nodo *nuevo_nodo);
nodo * AgregarPricipio2 (nodo * lista, nodo * nuevoNodo);
void AgregarPricipio3_PD(nodo ** lista, nodo * nuevo);
nodo * AgregarEnOrden (nodo * lista, nodo * nuevoNodo);
nodo * AgregarFinal (nodo * lista, nodo * nuevonodo);
nodo * BuscarUltimoNodo (nodo *lista);
nodo * eliminarPrimerNodo (nodo * lista);
nodo * eliminarUltimoNodo(nodo * lista);
nodo * EliminarNodoBuscado (nodo * lista, char nombre[20]);
nodo * EliminarNodosBuscados(nodo * lista, int EdadBuscada);
nodo * BorrarAllList (nodo * lista);
nodo * SumarNodos (nodo * lista);
void MostrarNodo(nodo * aux);
void MostrarLista(nodo * lista);
void MostrarListaP2(nodo ** lista);
int CantElementosLista(nodo* lista);
nodo * desvincularFirstNode (nodo ** lista);
persona verPrimero(nodo* lista);
void CargaLista_x_Archivo (nodo * lista, char rutaBin[]);
#endif // LISTAS_H_INCLUDED
