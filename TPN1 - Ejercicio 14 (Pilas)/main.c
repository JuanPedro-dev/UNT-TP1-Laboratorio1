#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    /** 14. Determinar si la cantidad de elementos de la pila DADA es par. Si es par,
        pasar el elemento del tope de la pila AUX a la pila PAR y si es impar pasar el
        tope a la pila IMPAR.   */

    char option = 's';
    int esPar; // Flag para saber si es par o no.

    // Creo DADA y la vacio.
    Pila DADA;
    inicpila(&DADA);

    // Creo AUX, limpio y le doy valores.
    Pila AUX;
    inicpila(&AUX);

    // Creo PAR y la vacio.
    Pila PAR;
    inicpila(&PAR);

    // Creo IMPAR y la vacio.
    Pila IMPAR;
    inicpila(&IMPAR);

    printf("\n                            Ejercicio 14 - Pilas                       \n\n");

    // Cargo valores a DADA.
    do
    {
        printf("\n >>> Pila DADA - ");
        leer(&DADA);
        system("cls");
        printf("\n                            Ejercicio 13 - Pilas                       \n");
        printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
        printf(" >>> Tu respuesta: ");
        fflush(stdin);
        scanf("%c", &option);
    }while(option == 's' || option == 'S');

//    apilar(&DADA,3);
//    apilar(&DADA,5);
//    apilar(&DADA,6);
//    apilar(&DADA,7);
//    apilar(&DADA,8);

    // Itero DADA para saber si son pares o impares. Flag = 0 impar y Flag = 1 es par.
    while(!pilavacia(&DADA))
    {
        esPar = 0;
        apilar(&AUX, desapilar(&DADA));
        if(!pilavacia(&DADA))
        {
            esPar = 1;
            apilar(&AUX, desapilar(&DADA));
        }
    }

    // Si es par paso el tope a par, sino a impar
    if(esPar)
    {
        printf(">> La Pila DADA es par. \n\n");
        apilar(&PAR, desapilar(&AUX));
    } else
    {
        printf(">> La Pila DADA es impar. \n\n");
        apilar(&IMPAR, desapilar(&AUX));
    }

    system("cls");
    printf("\n                          >> DADA                              \n\n");
    mostrar(&DADA);
    printf("\n                          >> AUXILIAR                          \n\n");
    mostrar(&AUX);
    printf("\n                          >> PAR                               \n\n");
    mostrar(&PAR);
    printf("\n                          >> IMPAR                             \n\n");
    mostrar(&IMPAR);


    printf("\n\n");
    system("pause");
    return 0;
}
