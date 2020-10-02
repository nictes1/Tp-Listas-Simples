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
nodo *BuscarUltimoNodo (nodo *lista);
nodo *BuscarNodoEspecifico (nodo * lista , char nombre[20]);
nodo * AgregarFinal (nodo * lista, nodo * nuevonodo);
nodo * EliminarNodoBuscado (nodo * lista, char nombre[20]);
nodo * AgregarEnOrden (nodo * lista, nodo * nuevoNodo);
nodo * BorrarAllList (nodo * lista);
nodo * SumarNodos (nodo * lista);
void MostrarNodo(nodo * aux);
void MostrarLista(nodo * lista);
nodo * eliminarPrimerNodo (nodo * lista);
nodo * eliminarUltimoNodo(nodo * lista);
nodo * desvincularFirstNode (nodo **lista);
void VerPrimero (nodo * lista);

#endif // LISTAS_H_INCLUDED
