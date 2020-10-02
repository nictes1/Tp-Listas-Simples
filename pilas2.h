#ifndef PILAS_H_INCLUDED
#define PILAS_H_INCLUDED
#include "listas.h"
#include "PERSONA.h"

#define Pila nodo*

void inicpila(Pila * p);
int pilaVaciaPersona(Pila * p);
void apilarPersona(Pila* p, persona pers);
persona desapilarPersona(Pila * p);
persona topePersona(Pila * p);
void mostrarPila(Pila * p);
void leerPila(Pila * p);

#endif // PILAS_H_INCLUDED
