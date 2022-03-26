#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    /** 18. Dado el siguiente ciclo (Pila1, Pila2 y Descarte son pilas):
        while ( (!pilaVacia(&Pila1)) && (!pilaVacia(&Pila2)) ) {
            apilar (&Descarte, desapilar(&Pila1));
            apilar (&Descarte, desapilar(&Pila2))
        }
        a. ¿Cuál es la condición del ciclo? Explique con sus palabras
        b. ¿Cuales son los posibles estados de ambas pilas al finalizar el ciclo?
    */

    printf("\n                                          Ejercicio 18 - Pilas                                           \n\n");
    printf(" >> 18. Dado el siguiente ciclo (Pila1, Pila2 y Descarte son pilas):                                      \n\n");
    printf(" >>     while ( (!pilaVacia(&Pila1)) && (!pilaVacia(&Pila2)) ) {                                           \n");
    printf(" >>         apilar (&Descarte, desapilar(&Pila1));                                                         \n");
    printf(" >>         apilar (&Descarte, desapilar(&Pila2));                                                          \n");
    printf(" >>     }                                                                                                   \n");
    printf(" >>  a. ¿Cuál es la condición del ciclo? Explique con sus palabras\n");
    printf(" >>  b. ¿Cuales son los posibles estados de ambas pilas al finalizar el ciclo? \n\n");
    printf(" >>  a. Mientras ambas pilas no esten vacias.\n");
    printf(" >>  b. Ambas pilas vacias si tienen la misma cantidad de elementos sino aquella con \n");
    printf(" >>     más elementos tendrá la diferencia(de sus cantidades). \n\n\n");
    printf("     Ingresar el código fuente para descomentar y ver la ejecución. ");

//    // Creo Pila1, limpio y le doy valores.
//    Pila Pila1;
//    inicpila(&Pila1);
//
//    // Creo Pila2 y la vacio.
//    Pila Pila2;
//    inicpila(&Pila2);
//
//    // Creo Descarte y la vacio.
//    Pila Descarte;
//    inicpila(&Descarte);
//
//    // Cargo algunos valores a ambos
//    leer(&Pila1);
//    leer(&Pila1);
//    leer(&Pila1);
//    leer(&Pila2);
//    leer(&Pila2);
//    leer(&Pila2);
//    leer(&Pila2);
//
//        while ( (!pilavacia(&Pila1)) && (!pilavacia(&Pila2)) ) {
//        apilar (&Descarte, desapilar(&Pila1));
//        apilar (&Descarte, desapilar(&Pila2));
//    }
//
//    // Muestro las pilas:
//    system("cls");
//    printf("\n                            Pila1                              \n");
//    mostrar(&Pila1);
//    printf("\n                            Pila2                              \n");
//    mostrar(&Pila2);
//    printf("\n                            Descarte                           \n");
//    mostrar(&Descarte);


    printf("\n\n");
    system("pause");
    return 0;
}
