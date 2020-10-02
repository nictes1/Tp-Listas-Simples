#include <stdio.h>
#include <stdlib.h>
#include "string.h"

#include "Listas.h"
#include "Persona.h"
#include "Funtions.h"
#include "TDA_PILA.h"


int main()
{


     char RutaArchivoOrden[]={"ListOrden.bin"}; ///LISTA 1
     char RutaArchivoPrip[]={"ListPPio.bin"}; ///Lista 2

     persona datos;

     char control;


     nodo * listaPrincipio = InicioLista();
     nodo * listaOrden = InicioLista();
     nodo * listaIntercalada = InicioLista();
     nodo * listaInvertida = InicioLista();

    Pila pilita;
    inicPila(&pilita);
    apilarPersona(&pilita,datos);
    mostrarPila(&pilita);




//    do{
//
//
//      menu();
//      int ejercicio = EleccionEjercicio();
//      char control;
//
//     switch(ejercicio)
//    {
//
//    case 1:
//            printf("\nPrograma que lea de un archivo datos y los inserte en una lista. ");
//            printf("pause");
//            system("cls");
//            printf("\n Carga de datos en Archivo: ");
//            cargarArchivo(RutaArchivoPrip,datos);
//            system("pause");
//            system("cls");
//            printf("\n Los datos cargados del archivo en la lista por el principio son:\n ");
//            listaPrincipio = cargarListaDesdeArchivo_Ppio(RutaArchivoPrip,listaPrincipio);
//            MostrarLista(listaPrincipio);
//        break;
//    case 2:
//            printf("\nPrograma que lea de un archivo datos y los inserte en una lista en forma ordenada.");
//            printf("pause");
//            system("cls");
//            printf("\nCarga da datos en Archivo: \n");
//            cargarArchivo(RutaArchivoOrden,datos);
//            system("pause");
//            system("cls");
//            printf("\nLos datos cargados en orden del archivo en la lista son\n");
//            listaOrden = cargarListaDesdeArchivo_Orden(RutaArchivoOrden, listaOrden);
//            MostrarLista(listaOrden);
//
//        break;
//    case 3:
//            printf("\mFunción que retorne un 1 (uno) o 0 (cero) si existe un determinado elemento en una lista dada.");
//            printf("pause");
//            system("cls");
//            printf("\n Ingrese la edad que desea buscar: ");
//            int edad=0;
//            scanf("%d", &edad);
//            subprogramaDeterminar_Exitencia_Nodo_Buscado(edad);
//
//        break;
//    case 4:
//            printf("\nFunción que intercale en orden los elementos de dos listas");
//            system("pause");
//            system("cls");
//            listaIntercalada = IntercalarLista(listaOrden,listaPrincipio,listaIntercalada);
//            printf("\nLista Intercalada:");
//            printf("\n(para intercalar las lista se utilizo la lista en orden y la desordenada)\n");
//            MostrarLista(listaIntercalada);
//
//        break;
//    case 5:
//
//        break;
//    case 6:
//            printf("\n Invertir los elementos de una lista redireccionando solamente los punteros. ");
//            system("pause");
//            system("cls");
//            listaInvertida=InvertirListas(listaIntercalada);
//            printf("\n Lista Invertida:\n");
//            MostrarLista(listaInvertida);
//
//
//        break;
//    case 7:
//
//        break;
//    case 8:
//            printf("\nEliminar de la lista cargada en el ejercicio anterior, aquellos nodos que contengan valores menores a 10.");
//            system("pause");
//            system("cls");
//            printf("\n Se eleiminaran los nodos menores a 10");
//
//            printf("\nLista Original\n");
//            MostrarLista(listaIntercalada);
//
//            printf("\nLista con los menores de 10 borrados: \n");
//            listaIntercalada=EliminarNodosEspecificos(listaIntercalada);
//            MostrarLista(listaIntercalada);
//
//
//        break;
//    }
//
//        printf("\n ¿Desea ver otro ejercicio?\n");
//        printf("\n Si---> Ingrese 's'");
//        printf("\n No---> Ingrese 'n'");
//        scanf("%c", &control);
//
//    }while(control=='s');



    return 0;
}
