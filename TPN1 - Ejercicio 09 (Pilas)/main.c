#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    /** 9. Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado. */

    char option = 's';

    printf("\n                            Ejercicio 9 - Pilas                       \n");

    // Creo PILA_A y la vacio.
    Pila PILA_A;
    inicpila(&PILA_A);

    // Cargo valores a Pila A
    do
    {
        printf("\n >>> Pila PILA_A - ");
        leer(&PILA_A);
        system("cls");
        printf("\n                            Ejercicio 9 - Pilas                       \n");
        printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
        printf(" >>> Tu respuesta: ");
        fflush(stdin);
        scanf("%c", &option);
    }while(option == 's' || option == 'S');

    // Creo PILA_B y la vacio.
    Pila PILA_B;
    inicpila(&PILA_B);

    // Cargo valores a Pila b
    do
    {
        printf("\n >>> Pila PILA_B - ");
        leer(&PILA_B);
        system("cls");
        printf("\n                            Ejercicio 9 - Pilas                       \n");
        printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
        printf(" >>> Tu respuesta: ");
        fflush(stdin);
        scanf("%c", &option);
    }while(option == 's' || option == 'S');

    // Mientras las pilas no esten vacias, las vacio.
    while(!pilavacia(&PILA_A) && !pilavacia(&PILA_B))
    {
        desapilar(&PILA_A);
        desapilar(&PILA_B);
    }

    // Ya vacie hasta que una de las dos se quedo sin valores. Ahora me fijo si le quedo a alguna de las pilas
    if(pilavacia(&PILA_A)&& pilavacia(&PILA_B))
    {
        printf("\n                            Ejercicio 9 - Pilas                       \n\n");
        printf(">>> La PILA A y PILA B tienen la misma cantidad de elementos. \n");
    } else if (!pilavacia(&PILA_A))
    {
        printf("\n                            Ejercicio 9 - Pilas                       \n\n");
        printf(">>> La PILA A tiene mayor cantidad de elementos. \n");
    } else
    {
        printf("\n                            Ejercicio 9 - Pilas                       \n\n");
        printf(">>> La PILA B tiene mayor cantidad de elementos. \n");
    }


    // Muestro resultados y pilas
    system("cls");
    printf("\n                       Remanente PILA_A                       \n\n");
    mostrar(&PILA_A);
    printf("\n                       Remanente PILA_B                       \n\n");
    mostrar(&PILA_B);



    printf("\n\n");
    system("pause");
    return 0;
}
