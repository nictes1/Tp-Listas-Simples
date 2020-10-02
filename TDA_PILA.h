#ifndef TDA_PILA_H_INCLUDED
#define TDA_PILA_H_INCLUDED

#include "Listas.h"
#include "Funtions.h"

#define Pila nodo *

void InicPilaInt(Pila * pila);
int pilavaciaInt(Pila * pila);
int topePilaInt(Pila * pila);
int desapilarPilaInt(Pila * pila);
void apilarPilaIntInt(Pila * pila, nodo * dato);
void agregarPilaInt(Pila * pila, int dato);
void leerPilaInt(Pila * pila);
void MostrarPilaInt(Pila * pila);

#endif // TDA_PILA_H_INCLUDED
