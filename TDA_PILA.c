#include "TDA_PILA.h"


///Incio La pila
void InicPila(Pila * pila)
{
    (*pila) = InicioLista;
}

///Comprobacion de si tiene o no datos
Pila pilavacia (Pila * pila)
{
    int flag=0;

    if(!(*pila))
    {
        flag = 1;
    }

    return flag;
}

///Veo el tope de la Pila
Pila topePila (Pila * pila)
{
    nodo * tope;

    if((*pila))
    {
        tope = See_first(*pila);
    }

    return tope;
}

Pila desapilar(Pila * pila)
{
    nodo * aux;

    if((*pila))
    {
       nodo * aux = (*pila);
       *pila = DeleteFirstNode(*pila);
    }

    return aux;
}

void apilar(Pila * pila, nodo * dato)
{
    *pila = AgregarPricipio((*pila),dato);
}

void agregar (Pila * pila)
{
    nodo * NewDate = subprogramaIngresaPersonaEnListaPPio;
    *pila = AgregarPricipio((*pila),NewDate);
}

void Mostrar(Pila * pila)
{
    if((*pila))
    {
        printf("---Tope---\n");
        MostrarLista(*pila);
        printf("---Base---\n");
    }
}






























