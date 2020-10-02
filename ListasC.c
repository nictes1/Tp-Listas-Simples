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

//************************************************************************************************************************************************
//************************************************************************************************************************************************
//************************************************************************************************************************************************

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

nodo * AgregarPricipio2 (nodo * lista, nodo * nuevoNodo)
{

    nuevoNodo->siguiente = lista;

    return nuevoNodo;
}

void AgregarPricipio3_PD(nodo ** lista, nodo * nuevo)
{
    if(*lista)
    {
        *lista=nuevo;
    }else
    {
        nuevo->siguiente=*lista;
        *lista=nuevo;
    }
}

nodo * AgregarEnOrden (nodo * lista, nodo * nuevoNodo)
{
    if(!lista)
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

//************************************************************************************************************************************************
//************************************************************************************************************************************************
//************************************************************************************************************************************************
nodo * BuscarUltimoNodo (nodo *lista)
{
    nodo * seg = lista;

    if(seg)
    {
        while(seg->siguiente)
        {
            seg = seg->siguiente;
        }
    }
    return seg;
}

nodo *BuscarNodoEspecifico (nodo * lista , char nombre[20])
{
    nodo * seg = lista;

        while((seg) && (strcmp(nombre, seg->siguiente)!=0))
        {
            seg = seg->siguiente;
        }

    return seg;
}
//************************************************************************************************************************************************
//************************************************************************************************************************************************
//************************************************************************************************************************************************

nodo * eliminarPrimerNodo (nodo * lista)
{
    nodo * aux = lista;

    lista = lista->siguiente;
    free(aux);

    return lista;
}

nodo * eliminarUltimoNodo(nodo * lista)
{
    nodo * anterior;
    nodo * actual = lista;

    while(actual->siguiente)
    {
        anterior = actual;
        actual = actual->siguiente;
    }

    anterior->siguiente = NULL;
    free(actual);

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

nodo * EliminarNodosBuscados(nodo * lista, int EdadBuscada)
{
    nodo * aux;

    if(lista)
    {
        while (lista!=NULL && lista->dato.edad<EdadBuscada)
        {
            aux=lista;
            lista=lista->siguiente;
            free(aux);
        }

        nodo * ante=lista;
        nodo * seg=lista->siguiente;

        while(seg!=NULL)
        {
            if(seg->dato.edad<EdadBuscada)
            {
                aux=seg;
                ante->siguiente=seg->siguiente;
                seg=seg->siguiente;
                free(aux);
            }
            else
            {
                ante=seg;
                seg=seg->siguiente;
            }

        }

    }
    return lista;
}

nodo * BorrarAllList (nodo * lista)
{
    nodo * proximo;
    nodo * seg;

    seg = lista;

    while (seg)
    {
        proximo=seg->siguiente;
        free(seg);
        seg=proximo;
    }
    return seg;
}

//************************************************************************************************************************************************
//************************************************************************************************************************************************
//************************************************************************************************************************************************

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
    printf("**************************\n");
    mostrarPersonas(aux->dato);
    printf("\n************************\n");
}

void MostrarLista(nodo * lista)
{
    nodo * aux = lista;

    while(aux)
    {
        MostrarNodo(aux);
        aux = aux->siguiente;
    }
}
void MostrarListaP2(nodo ** lista)
{
    nodo * seg = *lista;
    while (seg)
    {
        MostrarNodo(seg);
        seg = seg->siguiente;
    }
}

int CantElementosLista(nodo* lista)
{
    nodo * seg = lista;
    int cont = 0;

    while(seg)
    {
        cont++;
        seg = seg->siguiente;
    }
    return cont;
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

persona verPrimero(nodo * lista)
{
    return lista->dato;
}

void CargaLista_x_Archivo (nodo * lista, char rutaBin[])
{
    FILE * buffer = fopen(rutaBin,"rb");

    nodo * NuevoNodo;
    persona datos;

    char control;

    if(buffer)
    {
        while(control=="s" || control=='S');
        {
            printf("\n Nombre: ");
            fflush(stdin);
            gets(datos.nombre);
            printf("\n   Edad: ");
            scanf("%d", datos.nombre);

            NuevoNodo = CrearNodo(datos);
            lista = AgregarEnOrden(lista,NuevoNodo);

            fwrite(lista,sizeof(nodo),1,buffer);

            printf("\n Desea seguir ingresando datos? [S|N]");
            fflush(stdin);
            gets(control);
        }
        fclose(buffer);
    }
    else
    {
        printf("\n Error, sos malo programando... ");
    }

}






























































































































