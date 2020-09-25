#ifndef TDA_PILA_H_INCLUDED
#define TDA_PILA_H_INCLUDED

#include "Listas.h"
#include "Funtions.h"

#define Pila nodo *

void Mostrar(Pila * pila);
void agregar (Pila * pila);
void apilar(Pila * pila, nodo * dato);
Pila desapilar(Pila * pila);
Pila topePila (Pila * pila);
Pila pilavacia (Pila * pila);
void InicPila(Pila * pila);

#endif // TDA_PILA_H_INCLUDED
