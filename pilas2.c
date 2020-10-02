#include "pilas2.h"
#include "Persona.h"
#include "Listas.h"
#include "Funtions.h"


void inicPila(Pila* p)
{
    (*p)=InicioLista();
}

int pilaVaciaPersona(Pila * p)
{
    int rta = 0;

    if(!(*p))
    {
        rta = 1;
    }
    else
    {
        rta = 0;
    }
    return rta;
}

void apilarPersona(Pila * p, persona perso)
{
    (*p)=AgregarPricipio((*p),CrearNodo(perso));
}

persona desapilarPersona(Pila * p)
{
    persona perso = *p->dato;
    (*p) = eliminarPrimerNodo(*p);
    return perso;
}

void MostrarPila(Pila * p)
{
    MostrarListaP2(*p);
}

void Agregar(Pila * p)
{
    persona perso;
    (*p) = CrearNodo(perso);
}

persona topePersona(Pila * p)
{
    persona perso = *p->dato;
}

void Pila_Lista (pila * lista, Pila pilita)
{
    Pila aux;

    while (!pilaVaciaPersona(pilita))
    {

        persona perso = desapilarPersona(pilita);

        if(perso.edad %2==0)
        {
            Pila aux= crearNodo(perso);
            (lista)=AgregarFinal(lista, aux);

        }
        else
        {
            apilarPersona(aux, p);

        }

    }
}










