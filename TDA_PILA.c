#include "TDA_PILA.h"


///Incio La pila
void InicPila(Pila * pila)
{
    (*pila) = InicioLista();
}

///Comprobacion de si tiene o no datos
int pilavacia (Pila * pila)
{
    int flag = 1;

    if(!(*pila))
    {
        flag = 0;
    }
    return flag;
}

///Veo el tope de la Pila
int topePila (Pila * pila)
{
   int rta = 0;

    if((*pila))
    {
        tope = VerPrimero(*pila);
    }

    return tope;
}

int desapilarPila(Pila * pila)
{
    int rta;

    if((*pila))
    {
       rta = VerPrimero;
       *pila = DeleteFirstNode(*pila);
    }

    return rta;
}

void apilarPila(Pila * pila, nodo * dato)
{
    *pila = AgregarPricipio((*pila),dato);
}

void agregarPila(Pila * pila, int dato)
{
    nodo * aux = CrearNodo(dato)
    *pila = AgregarPricipio((*pila),aux);

}

void leerPila(Pila * pila)
{
    int dato = 0;
    printf("Ingrese un dato: \n");
    scanf("%d", &dato);

    apilar((*pila), dato);
}

void MostrarPila(Pila * pila)
{
   nodo * aux = (*pila);
   printf("\nTope");
   while(aux)
   {
       //printf("Dato: %d\n",aux->dato.edad);
       MostrarNodo(aux);
       aux=aux->siguiente;

   printf("Base\n");
}






























