#include "pilas.h"



void inicpila(Pila* p)
{
    (*p)= inicLista();
}

int pilaVacia(Pila* p)
{
    return ((*p)== NULL)?1:0;
}

void apilarPersona(Pila* p, persona pers)
{
    (*p)=agregarAlPrincipio((*p), crearNodo(pers));
}

persona desapilarPersona(nodo** p)
{
    persona per= (*p)->dato;
    (*p)= eliminarPrimerNodo(*p);
    return per;
}

persona topePersona(Pila*p)
{
    persona per=(*p)->dato;
    return per;
}

void mostrarPila(Pila* p)
{
    recorrerYmostrar(*p);
}

void leerPila(Pila *p)
{
    persona per;
    (*p)=crearNodo(per);

}

