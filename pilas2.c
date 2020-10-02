#include "pilas2.h"


void inicPila(Pila* p){
    (*p)=inicLista();
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
    persona perso = verPrimero(*p);
    (*p) = eliminarPrimerNodo(*p);
    return perso;
}

persona topePersona(Pila * p)
{
    return verPrimero(*p);
}
