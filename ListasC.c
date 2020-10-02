#include "Listas.h"
#include "Persona.h"
#include "Funtions.h"


///Cuerpo de las Funciones Listas

nodo *InicioLista ()
{
    return NULL;
}

nodo *CrearNodo(persona dato)
{
    nodo * aux = (nodo*) malloc(sizeof(nodo));

    aux->dato = dato;

    aux->siguiente = NULL;

    return aux;
}

nodo *AgregarPricipio (nodo *lista, nodo *nuevo_nodo)
{
    if (lista == NULL)
    {
        lista = nuevo_nodo;
    }
    else
    {
        nuevo_nodo->siguiente = lista;
        lista = nuevo_nodo;
    }

    return lista;
}

nodo * BuscarUltimoNodo (nodo *lista)
{
    nodo * seg = lista;

    if(seg!=NULL)
    {
        while(seg->siguiente!=NULL)
        {
            seg = seg->siguiente;
        }
    }
    return seg;
}

nodo *BuscarNodoEspecifico (nodo * lista , char nombre[20])
{
    nodo * seg = lista;

    if(seg)
    {
        while(seg!=NULL && strcmp(nombre, seg->siguiente)!=0)
        {
            seg = seg->siguiente;
        }
    }

    return seg;
}

nodo * AgregarFinal (nodo * lista, nodo * nuevonodo)
{
   if(lista == NULL)
   {
       lista = nuevonodo;

   }
   else
   {
       nodo * ultimo = BuscarUltimoNodo(lista);
       ultimo->siguiente = nuevonodo;
   }

    return lista;
}

nodo * EliminarNodoBuscado (nodo * lista, char nombre[20])
{
   nodo * seg;
   nodo * ante;

   if((lista!=NULL) && (strcmp(nombre,seg->dato.nombre)>0))
   {
       nodo * aux = lista;

       lista = lista->siguiente;
       free(aux);
   }
   else
   {
     seg = lista;
     while((lista!=NULL)&&(strcmp(nombre,seg->dato.nombre)!=0))
     {
         ante = seg;
         seg=seg->siguiente;
     }

     if(seg!=NULL)
     {
         ante->siguiente = seg->siguiente;
         free(seg);
     }
   }
     return lista;
}

nodo * AgregarEnOrden (nodo * lista, nodo * nuevoNodo)
{
    if(lista == NULL)
    {
        lista = nuevoNodo;
    }
    else
    {
        if(lista->dato.edad > nuevoNodo->dato.edad)
        {
            lista = AgregarPricipio(lista, nuevoNodo);
        }
        else
        {
            nodo * seg = lista->siguiente;
            nodo * ante = lista;

            while(seg!=NULL && seg->dato.edad < nuevoNodo->dato.edad)
            {
                ante = seg;
                seg = seg->siguiente;
            }


            ante->siguiente = nuevoNodo;
            nuevoNodo->siguiente = seg;

        }
    }
    return lista;
}

nodo * BorrarAllList (nodo * lista)
{
    nodo * proximo;
    nodo * seg;

    seg = lista;

    while (seg!=NULL)
    {
        proximo=seg->siguiente;
        free(seg);
        seg=proximo;
    }
    return seg;
}

nodo * SumarNodos (nodo * lista)
{
    nodo * seg = lista;
    int suma = 0;

    while(seg!=NULL)
    {
      suma = suma + seg->dato.edad;
      seg=seg->siguiente;
    }

    return suma;
}

void MostrarNodo(nodo * aux)
{
    mostrarPersonas(aux->dato);
}

void MostrarLista(nodo * lista)
{
    nodo * aux = lista;

    while(aux != NULL)
    {
        MostrarNodo(aux);
        aux = aux->siguiente;
    }
}

nodo * eliminarPrimerNodo (nodo * lista)
{
    nodo * aux;
    nodo * siguiente;

    if(lista)
    {
        aux = lista;
        siguiente = lista->siguiente;
        free(aux);
    }
    return lista;
}

nodo * eliminarUltimoNodo(nodo * lista)
{
    nodo * anterior;
    nodo * actual = lista;

    while(actual->siguiente != NULL)
    {
        anterior = actual;
        actual = actual->siguiente;
    }

    anterior->siguiente = NULL;
    free(actual);

    return lista;
}


nodo * desvincularFirstNode (nodo ** lista)
{
    nodo * aux = NULL;

    if(*lista)
    {
        aux = (*lista);

        *lista = (*lista)->siguiente;

        aux->siguiente = NULL;
    }

    return aux;
}

int VerPrimero (nodo * lista)
{
    int rta;

    if(lista)
    {
        rta = lista->dato.edad;
    }

    return rta;
}
































































































































