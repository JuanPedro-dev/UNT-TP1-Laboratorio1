#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "../Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    /**1. Cargar desde el teclado una pila DADA con 5 elementos. Pasar los tres primeros elementos
        a la pila AUX1 y los dos restantes a la pila AUX2, ambas pilas inicializadas en vacío.*/
    system("color 3e");

    printf("\n\n      Base ................................................................................. Tope\n\n");
    printf("    //    /////////  //      //    //////////   //      //         //      //   //////////  //      //     \n");
    Sleep(50);
    printf("    //           //  //      //    //      //   ///     //         //      //       //      ///     //     \n");
    Sleep(50);
    printf("    //           //  //      //    //      //   //  /   //         //      //       //      //  /   //     \n");
    Sleep(50);
    printf("    //   //      //  //      //    //////////   //   /  //         //      //       //      //   /  //     \n");
    Sleep(50);
    printf("    //   //      //  //      //    //      //   //    / //         //      //       //      //    / //     \n");
    Sleep(50);
    printf("    //   //      //  //      //    //      //   //     ///         //      //       //      //     ///     \n");
    Sleep(50);
    printf("    //   //////////  //////////    //      //   //      //         //////////       //      //      //     \n");
    printf("\n\n     Base ................................................................................. Tope\n\n");


    printf("\n                                     Ejercicio 1 - Pilas                       \n\n");

    // Creo una pila DADA, inicializo vacia.
    Pila DADA;
    inicpila(&DADA);

    // Cargo 5 datos Por teclado en pila DADA.
    printf("    >>> Ingrese el 1º elemento a la pila: ");
    leer(&DADA);
    printf("    >>> Ingrese el 2º elemento a la pila: ");    leer(&DADA);
    printf("    >>> Ingrese el 3º elemento a la pila: ");
    leer(&DADA);
    printf("    >>> Ingrese el 4º elemento a la pila: ");    leer(&DADA);
    printf("    >>> Ingrese el 5º elemento a la pila: ");
    leer(&DADA);

    // Creo una pila AUX1, inicializo vacia y paso 3 datos de DADA.
    Pila AUX1;
    inicpila(&AUX1);

    apilar(&AUX1, desapilar(&DADA));
    apilar(&AUX1, desapilar(&DADA));    apilar(&AUX1, desapilar(&DADA));


    // Creo una pila AUX2, inicializo vacia y paso 2 datos de DADA.
    Pila AUX2;
    inicpila(&AUX2);
    apilar(&AUX2, desapilar(&DADA));
    apilar(&AUX2, desapilar(&DADA));

    // Mostrar el resultado
    system("cls");
    printf("\n                        Base .............. Resultados.................. Tope\n\n");
    printf("\n                          Pila DADA                       \n");
    mostrar(&DADA);
    printf("\n                          Pila Auxiliar1                       \n");
    mostrar(&AUX1);
    printf("\n                          Pila Auxiliar2                       \n");
    mostrar(&AUX2);


    printf("\n\n");
    system("pause");
    return 0;
}
