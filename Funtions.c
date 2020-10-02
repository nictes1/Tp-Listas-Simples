#include <stdio.h>
#include <stdlib.h>

#include "Funtions.h"
#include "Listas.h"
#include "Persona.h"
#include "string.h"



//Cargar una lista con datos provenientes de un archivo
void cargarArchivo (char ruta[],persona persona)
{
    FILE * buffer = fopen(ruta, "ab");
    char control='s';

    if(buffer!=NULL)
    {
        while (control=='s')
        {
            printf("\nNombre: ");
            fflush(stdin);
            scanf("%s" , persona.nombre);

            printf("\nEdad:");
            scanf("%d", &persona.edad);

            fwrite(&persona, sizeof(persona),1, buffer);

            printf("\n Desea agregar mas datos? [S|N] ");
            fflush(stdin);
            scanf("%c", &control);
        }
        fclose(buffer);
    }
    else
    {
        printf("\nError en la carga de datos.");
    }
}

nodo* archivo_A_lista(char ruta[], nodo* lista)
{
    FILE * buffer = fopen(ruta, "rb");
    persona perso;

    if(buffer)
    {
        while(fread(&perso, sizeof(persona), 1, buffer)>0)
        {
            lista=AgregarEnOrden(lista, CrearNodo(perso));
        }
        fclose(buffer);
    }
    return lista;
}

nodo * subprogramaIngresaPersonaEnListaOrden(nodo * lista, persona p)
{
    lista = AgregarEnOrden(lista,CrearNodo(p));
    //lista = AgregarPricipio(lista, CrearNodo(p));
    return lista;
}

nodo * cargarListaDesdeArchivo_Orden(char Ruta[], nodo * lista)
{
    FILE * buffer  =fopen(Ruta, "rb");
    persona aux;

    if(buffer!=NULL)
    {
        while(fread(&aux, sizeof(persona), 1, buffer)>0)
        {
            lista=subprogramaIngresaPersonaEnListaOrden(lista, aux);
        }
        fclose(buffer);
    }
    return lista;
}

nodo * subprogramaIngresaPersonaEnListaPPio(nodo * lista, persona p)
{
    //lista = AgregarEnOrden(lista,CrearNodo(p));
    lista = AgregarPricipio(lista, CrearNodo(p));
    return lista;
}

nodo * cargarListaDesdeArchivo_Ppio(char Ruta[], nodo * lista)
{
    FILE * buffer  = fopen(Ruta, "rb");
    persona aux;

    if(buffer!=NULL)
    {
        while(fread(&aux, sizeof(persona), 1, buffer)>0)
        {
            lista=subprogramaIngresaPersonaEnListaPPio(lista, aux);
        }
        fclose(buffer);
    }
    return lista;
}

//3 buscar nodo por nombre.

int buscarNodo_simple_xNmbre(nodo * lista, char buscar[])
{
    int flag=1;

    while(lista!=NULL)
    {
        if(strcmp(buscar, lista->dato.nombre))
        {
            flag=0;
        }
    }

    return flag;
}

// buscar nodo por edad.
int buscarNodo_simple_xEdad (nodo * lista, int buscar)
{
    int flag = 1;

    if(lista)
    {
        while(lista!=NULL && lista->dato.edad != buscar)
        {
            lista = lista->siguiente;
        }

        if(lista)
        {
            flag = 0;
        }
    }

    return flag;
}

void subprogramaDeterminar_Exitencia_Nodo_Buscado(int edad)
{
    int rta = buscarNodo_simple_xEdad;

    if(rta==0)
    {
        printf("\n El dato buscado se encuentro en la lista. ");
    }
    else
    {
        printf("\n El dato buscado no se encontro en la lista.");
    }
}

//Carga lista
void CargaLista (nodo * lista, char rutaBin[])
{
    FILE * cach = fopen(rutaBin,"ab");

    nodo * NuevoNodo;
    persona datos;

    char control;

   if(cach!=NULL)
   {
    while(control=="s" || control=='S');
    {
        printf("\n Nombre: ");
        fflush(stdin);
        scanf("%s", datos.nombre);
        printf("\n   Edad:");
        scanf("%d", datos.nombre);

        NuevoNodo = CrearNodo(datos);
        lista = AgregarEnOrden(lista,NuevoNodo);

        fwrite(lista,sizeof(nodo),1,cach);

        printf("\n Desea seguir ingresando datos? [S|N]");
        fflush(stdin);
        scanf("%c", &control);

    }
    fclose(cach);
   }
    else
    {
        printf("\n Error de carga de datos");
    }

}

/// Intercalar dos listas
nodo * IntercalarLista (nodo * listaA, nodo * listaB, nodo * listaC)
{
    nodo * aux;

    while(listaA!=NULL && listaB!=NULL)
    {
        if(listaA->dato.edad>listaB->dato.edad)
        {
            aux = listaB;
            listaB = listaB->siguiente;
        }
        else
        {
            aux = listaA;
            listaA = listaA->siguiente;
        }
        aux->siguiente = NULL;
        listaC = AgregarPricipio(listaC, aux);
    }

    if (listaA!=NULL)
    {
        listaC = AgregarPricipio(listaC, listaA);
    }
    else
    {
        listaC = AgregarPricipio(listaC, listaB);
    }

    return listaC;
}

///Invertir Nodo, utiliza funcion desvincular nodo.
nodo * InvertirListas(nodo * lista)
{
   nodo * aux;
   nodo * invertida = InicioLista();

   while(lista!=NULL)
   {
       aux = desvincularFirstNode(&lista);
       invertida = AgregarPricipio(invertida, aux);
   }

    return invertida;
}

///Eliminar de la lista cargada en el ejercicio anterior, aquellos nodos que contengan valores menores a 10.
nodo * EliminarNodosEspecificos (nodo * lista, int buscar)
{
    nodo * aux;
    nodo * anterior;
    nodo * siguiente;

    if(lista)
    {
        while(lista->dato.edad<buscar)
        {
            aux = lista;
            lista = lista->siguiente;
            free(aux);
        }
         while(siguiente != NULL)
        {
            if(siguiente->dato.edad < buscar)
            {
                aux = siguiente;
                anterior->siguiente = siguiente->siguiente;
                siguiente = siguiente->siguiente;
                free(aux);
            }
            else
            {
                anterior = siguiente;
                siguiente = siguiente->siguiente;
            }

        }

    }
    return lista;
}

///mostrar contenido de archivo
void MostarArchivo (char ruta[])
{
    FILE * buffer = fopen(ruta,"rb");
    persona datos;

    if(buffer!=NULL)
    {
        while(fread(&datos,sizeof(persona),1,buffer)>0)
        {
            printf("\n |Nombre: %s|", datos.nombre);
            printf("\n |  Edad: %d|", datos.edad);
        }

        fclose(buffer);
    }
    else
    {
        printf("\n Error en la lectura de datos. ");
    }
}



/*int buscaDatoArchi(char dato[], char ruta[)
{
    int flag = 0;
    persona perso;

    FILE * buffer = fopen(ruta,"rb");

    if(buffer)
    {
        while(fread(&perso,sizeof(persona),1,buffer)>0 && flag==0)
        {
            if(strcmp(perso.nombre, dato)==0)
            {
                flag = 1;
            }
        }
        fclose(buffer);
    }
    return flag;
}*/



void menu()
{
    printf("\n TRABAJO PRACTICO LISTAS SIMPLES \n");
    system("pause");
    system("cls");
    printf("\n Ejercicios...");
    printf("\n1-Hacer un programa que lea de un archivo datos y los inserte en una lista.");
    printf("\n2-Hacer un programa que lea de un archivo datos y los inserte en una lista en forma ordenada. ");
    printf("\n3-Hacer una función que retorne un 1 (uno) o 0 (cero) si existe un determinado elemento en una lista dada. ");
    printf("\n4-Hacer una función que intercale en orden los elementos de dos listas ordenadas generando una nueva lista.");
    printf("\n5-Codificar el TDA Pila con las funciones necesarias.");
    printf("\n6-Invertir los elementos de una lista redireccionando solamente los punteros.");
    printf("\n7-");
    printf("\n8-Eliminar de la lista cargada en el ejercicio anterior, aquellos nodos que contengan valores menores a 10.");

}

int EleccionEjercicio()
{
    int ejercicio;
    printf("\n Que ejercicio desea ver? ");
    scanf("%d", &ejercicio);

    return ejercicio;
}


















































