#include "TDA_PILA.h"


///Incio La pila
void InicPilaInt(Pila * pila) //bien
{
    (*pila) = InicioLista();
}

///Comprobacion de si tiene o no datos
int pilavaciaInt(Pila * pila)  //bien
{
    int flag = 1;

    if(!(*pila))
    {
        flag = 0;
    }
    return flag;
}

///Veo el tope de la Pila
/*int topePilaInt(Pila * pila)  //
{
   int rta = 0;

    if((*pila))
    {
        rta = VerPrimero(*pila);
    }
    return rta;
}*/

/*int desapilarPilaInt(Pila * pila)
{
    int rta;

    if((*pila))
    {
       rta = VerPrimero(*pila);
       *pila = eliminarPrimerNodo(*pila);
    }

    return rta;
}*/

/*void apilarPilaInt(Pila * pila, int dato)
{
    *pila = AgregarPricipio((*pila),CrearNodo(dato)); ///tira error porque la funcion 'crear' esta hecha con persona, esta bien pensado el algoritmos
}*/

/*void agregarPilaInt(Pila * pila, int dato)
{
    nodo * aux = CrearNodo(dato)
    *pila = AgregarPricipio((*pila),aux);

}*/

/*void leerPilaInt(Pila * pila)
{
    int dato = 0;
    printf("Ingrese un dato: \n");
    scanf("%d", &dato);
    apilar(pila, dato);
}*/

void MostrarPilaInt(Pila * pila)
{
   nodo * aux = (*pila);
   printf("\nTope");
   while(aux)
   {
       //printf("Dato: %d\n",aux->dato.edad);
       MostrarNodo(aux);
       aux=aux->siguiente;
   }
   printf("Base\n");
}






























