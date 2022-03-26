#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    /** 12. Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la
            pila DADA todos los elementos que existan en MODELO.    */

    char option = 's';  int coincidenFlag;

    // Creo DADA y la vacio.
    Pila DADA;
    inicpila(&DADA);

    // Creo MODELO y la vacio.
    Pila MODELO;
    inicpila(&MODELO);
    apilar(&MODELO,3);
    apilar(&MODELO,2);
    apilar(&MODELO,1);

    // Creo AUX1 y la vacio.
    Pila AUX1;
    inicpila(&AUX1);

    // Creo MODELO_AUXILIAR y la vacio.
    Pila MODELO_AUXILIAR;
    inicpila(&MODELO_AUXILIAR);

    // Creo descarte y la vacio.
    Pila descarte;
    inicpila(&descarte);


    printf("\n                            Ejercicio 12 - Pilas                       \n");

//    // Cargo valores a DADA.
//    do
//    {
//        printf("\n >>> Pila DADA - ");
//        leer(&DADA);
//        system("cls");
//        printf("\n                            Ejercicio 11 - Pilas                       \n");
//        printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
//        printf(" >>> Tu respuesta: ");
//        fflush(stdin);
//        scanf("%c", &option);
//    }while(option == 's' || option == 'S');

    apilar(&DADA,2);
    apilar(&DADA,1);
    apilar(&DADA,3);
    apilar(&DADA,5);
    apilar(&DADA,4);
    apilar(&DADA,5);


    // Itero DADA para hacer las comparaciones.
    while(!pilavacia(&DADA))
    {
        coincidenFlag = 0; // 0 significa q no hay coincidencias
        while(!pilavacia(&MODELO) && !pilavacia(&DADA) && coincidenFlag == 0)
        {
            if(tope(&MODELO) == tope(&DADA))   // usar el flag como break
            {
                coincidenFlag = 1;
                apilar(&MODELO_AUXILIAR, desapilar(&MODELO));

            } else
            {
                apilar(&MODELO_AUXILIAR, desapilar(&MODELO));
            }
        }

        // while para voler a modelo
        while(!pilavacia(&MODELO_AUXILIAR))
        {
            apilar(&MODELO, desapilar(&MODELO_AUXILIAR));
        }

        // Si hubo coincidencia, entonces coloco el tope en descarte, sino apilo en la auxiliar
       if(coincidenFlag == 1)
       {
           apilar((&descarte), desapilar(&DADA));
       }else
       {
          apilar(&AUX1, desapilar(&DADA));
       }
    }

    // Apilo de nuevo en dada los valores sin los coincidentes.
    while(!pilavacia(&AUX1))
    {
        apilar(&DADA, desapilar(&AUX1));
    }

    system("cls");
    printf("\n                          >> DADA                              \n\n");
    mostrar(&DADA);
    printf("\n                          >> AUXILIAR                           \n\n");
    mostrar(&AUX1);
    printf("\n                          >> MODELO                             \n\n");
    mostrar(&MODELO);
    printf("\n                          >> MODELO Auxiliar                    \n\n");
    mostrar(&MODELO_AUXILIAR);
    printf("\n                          >> Descarte                  \n\n");
    mostrar(&descarte);


    printf("\n\n");
    system("pause");
    return 0;
}
