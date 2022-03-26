#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    /** 16. Qué realiza el siguiente código escrito en lenguaje C (Pila1, Aux y Result son pilas):
        while (!pilavacia(&Pila1)) {
            if (tope(&Pila1) == 5) {
                apilar (&Aux, desapilar(&Pila1));
                apilar (&Result, desapilar(&Aux));
            }
        }
    */
    printf("\n                            Ejercicio 16 - Pilas                       \n\n");
    printf("  >> 16. Qué realiza el siguiente código escrito en lenguaje C (Pila1, Aux y Result son pilas): \n");
    printf("\n       while (!pilavacia(&Pila1)) {                   \n");
    printf("            if (tope(&Pila1) == 5) {                    \n");
    printf("                apilar (&Aux, desapilar(&Pila1));       \n");
    printf("                apilar (&Result, desapilar(&Aux));      \n");
    printf("            }                                           \n");
    printf("         }                                              \n\n");
    printf(" >> Mientras Pila 1 no este vacia, compara el tope de Pila 1 con 5, si no es 5   \n");
    printf(" >> hace un bucle infinito pues nunca se modifica el valor de Pila 1. Por lo tanto va           \n");
    printf(" >> a terminar el programa, si y solo si, Pila 1 contiene solo 5 en todos sus valores.           \n");

    printf("\n Ingrese al código fuente para analizar el fallo descomentando el las lineas que continuan este texto. \n\n");

//    // Creo Pila1, limpio y le doy valores.
//    Pila Pila1;
//    inicpila(&Pila1);
//
//    // Creo Aux y la vacio.
//    Pila Aux;
//    inicpila(&Aux);
//
//    // Creo Result y la vacio.
//    Pila Result;
//    inicpila(&Result);
//
//    // Cargo 3 datos en Pila 1
//    leer(&Pila1);
//    leer(&Pila1);
//    leer(&Pila1);
//
//    while (!pilavacia(&Pila1)) {
//        if (tope(&Pila1) == 5) {
//            apilar (&Aux, desapilar(&Pila1));
//            apilar (&Result, desapilar(&Aux));
//        }
//    }
//
//    printf("EL ciclo finalizo.\n\n");
//    printf("\n                           >> Pila1                            \n");
//    mostrar(&Pila1);
//    printf("\n                           >> Auxiliar                         \n");
//    mostrar(&Aux);
//    printf("\n                           >> Result                           \n");
//    mostrar(&Result);


    printf("\n\n");
    system("pause");
    return 0;
}
