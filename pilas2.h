#ifndef PILAS_H_INCLUDED
#define PILAS_H_INCLUDED
#include "listas.h"
#include "PERSONA.h"

#define Pila nodo*

void inicPila(Pila* p);
int pilaVaciaPersona(Pila * p);
void apilarPersona(Pila * p, persona perso);
persona desapilarPersona(Pila * p);
void MostrarPila(Pila * p);
void Agregar(Pila * p);
persona topePersona(Pila * p);

#endif // PILAS_H_INCLUDED
