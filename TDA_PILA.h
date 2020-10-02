#ifndef TDA_PILA_H_INCLUDED
#define TDA_PILA_H_INCLUDED

#include "Listas.h"
#include "Funtions.h"

#define Pila nodo *

void MostrarPila(Pila * pila);
void agregarPila (Pila * pila);
void apilarPila(Pila * pila, nodo * dato);
Pila desapilarPila(Pila * pila);
Pila topePila (Pila * pila);
Pila pilavacia (Pila * pila);
void InicPila(Pila * pila);

#endif // TDA_PILA_H_INCLUDED
