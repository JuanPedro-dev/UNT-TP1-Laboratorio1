#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    char option;
    /** 17. Para el ejercicio “Cargar por teclado una pila ORIGEN y pasar a la pila DISTINTO todos aquellos
    elementos que preceden al valor 5 (elementos entre el tope y el valor 5). No se asegura que exista algún
    valor 5”, se realizo el siguiente programa:
    // este programa carga por teclado una pila Origen y pasa a la pila Destino todos aquellos elementos
     que preceden el valor 5

     int main() {
        Pila Origen, Distinto;
        inicpila(&Origen);
        inicpila(&Distinto);
        leer(&Origen);
        if (!pilaVacia(&Origen)){
            while (tope(&Origen) != 5) {
            apilar (&Distinto, desapilar(&Origen));
            }
        }
    }

    a. .Resuelve el problema planteado?
    b. .Cuales son los errores que encuentra?
    c. Reescribir el código para que resuelva adecuadamente el problema planteado.
    d. Indicar las componentes del programa.
    */


    printf("\n                                          Ejercicio 17 - Pilas                                                    \n\n");
    printf(" >> 17. Para el ejercicio “Cargar por teclado una pila ORIGEN y pasar a la pila DISTINTO todos aquellos             \n");
    printf(" >>     elementos que preceden al valor 5 (elementos entre el tope y el valor 5). No se asegura que exista algún    \n");
    printf(" >>     valor 5”, se realizo el siguiente programa:                                                                 \n\n");
    printf("////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n");
    printf(" >>  // este programa carga por teclado una pila Origen y pasa a la pila Destino todos aquellos elementos           \n");
    printf(" >>     que preceden el valor 5                                                                                     \n\n");
    printf(" >>     int main() {                                                                                                \n");
    printf(" >>         Pila Origen, Distinto;                                                                                  \n");
    printf(" >>         inicpila(&Origen);                                                                                      \n");
    printf(" >>         inicpila(&Distinto);                                                                                    \n");
    printf(" >>         leer(&Origen);                                                                                          \n");
    printf(" >>         if (!pilaVacia(&Origen)){                                                                               \n");
    printf(" >>             while (tope(&Origen) != 5) {                                                                        \n");
    printf(" >>             apilar (&Distinto, desapilar(&Origen));                                                             \n");
    printf(" >>             }                                                                                                   \n");
    printf(" >>         }                                                                                                       \n\n");
    printf(" >> a. ¿Resuelve el problema planteado?                                                                             \n");
    printf(" >> b. ¿Cuales son los errores que encuentra?                                                                       \n");
    printf(" >> c. Reescribir el código para que resuelva adecuadamente el problema planteado.                                  \n");
    printf(" >> d. Indicar las componentes del programa.                                                                        \n\n");

    printf(" >> a. No, si tope de origen es distinto de 5, queda en un blucle infinito, y si es 5 no hace nada                  \n");
    printf(" >> b. No recorre la pila ORIGEN debidamente, no contempla bucles infinitos.                                        \n");
    printf(" >> c. int main(){                                                                                                  \n");
    printf(" >>         Pila Origen, Distinto;                                                                                  \n");
    printf(" >>         inicpila(&Origen);                                                                                      \n");
    printf(" >>         inicpila(&Distinto);                                                                                    \n");
    printf(" >>         while (!pilavacia(&Origen) && tope(&Origen) !=5){                                                       \n");
    printf(" >>             apilar(&Distinto, desapilar(&Origen));                                                              \n");
    printf(" >>         }                                                                                                       \n\n");
    printf("   Ingrese al código fuente para analizar el fallo, descomentando (//) las lineas que continuan este texto.            \n\n");
    printf("   O Ingrese al código fuente para analizar el item c descomentando (/** */) las lineas que continuan este texto.            \n\n");

//        Pila Origen, Distinto;
//        inicpila(&Origen);
//        inicpila(&Distinto);
//        leer(&Origen);
//
//        if (!pilavacia(&Origen)){   // no se si fue error de tipeo pero reemplace pilaVacia por pilavacia
//            while (tope(&Origen) != 5) {
//            apilar (&Distinto, desapilar(&Origen));
//            }
//        }
//
//    //Muestro Pilas:
//    printf("\n                          >> Origen                              \n");
//    mostrar(&Origen);
//    printf("\n                          >> Distinto                            \n");
//    mostrar(&Distinto);


/**    // Creo pila Origen y limpio valores.
    Pila Origen;
    inicpila(&Origen);

    // Creo pila Distinto y limpio valores.
    Pila Distinto;
    inicpila(&Distinto);


    // Pruebo con 4 valores.
    printf(">> Vamos a algunos valores a Origen para hacer la prueba\n");
    leer(&Origen);
    leer(&Origen);
    leer(&Origen);
    leer(&Origen);

    // Itero Origen y si es el tope != 5 lo paso a distinto.
    while (!pilavacia(&Origen) && tope(&Origen) !=5)
    {
        apilar(&Distinto, desapilar(&Origen));
    }

    //Muestro Pilas:
    system("cls");
    printf("\n                        Base .............. Resultados.................. Tope\n\n");
    printf("\n                            >> Origen                                     \n");
    mostrar(&Origen);
    printf("\n                            >> Distinto                                   \n");
    mostrar(&Distinto);
    printf("\n                        Base .............. Resultados.................. Tope\n\n");
*/


    printf("\n\n");
    system("pause");
    return 0;
}
