#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    /** 13. Suponiendo la existencia de una pila LÍMITE, pasar los elementos de la pila DADA
        que sean mayores o iguales que el tope de LIMITE a la pila  MAYORES, y los elementos
        que sean menores a la pila MENORES.   */

    char option;

    // Creo DADA y la vacio.
    Pila DADA;
    inicpila(&DADA);

    // Creo LIMITE, limpio y le doy valores.
    Pila LIMITE;
    inicpila(&LIMITE);
    apilar(&LIMITE,2);
    apilar(&LIMITE,1);
    apilar(&LIMITE,3);

    // Creo MAYORES y la vacio.
    Pila MAYORES;
    inicpila(&MAYORES);

    // Creo MENORES y la vacio.
    Pila MENORES;
    inicpila(&MENORES);

    printf("\n                            Ejercicio 13 - Pilas                       \n");

//    // Cargo valores a DADA.
//    do
//    {
//        printf("\n >>> Pila DADA - ");
//        leer(&DADA);
//        system("cls");
//        printf("\n                            Ejercicio 13 - Pilas                       \n");
//        printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
//        printf(" >>> Tu respuesta: ");
//        fflush(stdin);
//        scanf("%c", &option);
//    }while(option == 's' || option == 'S');

    apilar(&DADA,2);
    apilar(&DADA,3);
    apilar(&DADA,5);
    apilar(&DADA,6);
    apilar(&DADA,7);
    apilar(&DADA,8);

    // Itero DADA, y comparo el tope de dada con el tope de Limite
    while(!pilavacia(&DADA))
    {
      if(tope(&DADA) >= tope(&LIMITE))
      {
          apilar(&MAYORES, desapilar(&DADA));
      } else
      {
          apilar(&MENORES, desapilar(&DADA));
      }
    }

    // Muestro Pilas.
    system("cls");
    printf("\n                           >> DADA                              \n\n");
    mostrar(&DADA);
    printf("\n                           >> LIMITE                              \n\n");
    mostrar(&LIMITE);
    printf("\n                           >> MAYORES                               \n\n");
    mostrar(&MAYORES);
    printf("\n                           >> MENORES                             \n\n");
    mostrar(&MENORES);


    printf("\n\n");
    system("pause");
    return 0;
}
