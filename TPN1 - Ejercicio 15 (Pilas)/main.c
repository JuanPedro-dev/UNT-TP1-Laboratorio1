#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    /** 15. Cual es la condición del siguiente ciclo? .Cuando finaliza el ciclo? (Pila1, Pila2, y Descarte son pilas):
            while (!pilavacia(&Pila1)) {
                apilar (&Pila2, desapilar(&Descarte))
            }
    */

    printf("\n                            Ejercicio 15 - Pilas                       \n\n");
    printf("  >> ¿Cuál es la condición del siguiente ciclo? ¿Cuándo finaliza el ciclo? (Pila1, Pila2, y Descarte son pilas): \n");
    printf("\n      while (!pilavacia(&Pila1)) {                      \n");
    printf("          apilar (&Pila2, desapilar(&Descarte));        \n");
    printf("      }                      \n\n");

    printf(" >> Podemos ver que la condición del ciclo es mientras 'Pila1 no este vacia'; pero el ciclo \n");
    printf(" >> no modifica a Pila1 por lo que no cortaria nunca quedando un bucle infinito si no fuera por\n");
    printf(" >> que cuando se vacie Descarte va a tirar un error rompiendo el programa.\n");

    printf("\n Ingrese al código fuente para analizar el fallo descomentando el las lineas que continuan este texto. ");

    // Creo Pila1, limpio y le doy valores.
    Pila Pila1;
    inicpila(&Pila1);

    // Creo Pila2 y la vacio.
    Pila Pila2;
    inicpila(&Pila2);

    // Creo Descarte y la vacio.
    Pila Descarte;
    inicpila(&Descarte);
//   while (!pilavacia(&Pila1)) {
//        apilar (&Pila2, desapilar(&Descarte));
//    }
//
//    // Podemos ver que la condición del ciclo es, mientras "Pila1 no este vacia"; pero el ciclo
//    // no modifica a Pila1 por lo que no cortaría nunca quedando un bucle infinito si no fuera por
//    // que, cuando se vacie Descarte va a tirar un error rompiendo el programa.
//
//
//    // Nunca corre pues se rompe el programa con cuando intenta pasar a Pila 2 elementos de la pila vacia Descarte
//    printf("EL ciclo finalizo.\n\n");
//    printf("\n                            >> Pila1                              \n");
//    mostrar(&Pila1);
//    printf("\n                            >> Pila2                              \n");
//    mostrar(&Pila2);
//    printf("\n                           >> Descarte                            \n");
//    mostrar(&Descarte);


    printf("\n\n");
    system("pause");
    return 0;
}
