#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    /** 10. Comparar las pilas A y B, evaluando si son completamente iguales (en cantidad de elementos, valores que
        contienen y posición de los mismos). Mostrar por pantalla el resultado.  */

    char option;
    int flag;

    printf("\n                            Ejercicio 10 - Pilas                       \n");

    // Creo PILA_A y la vacio.
    Pila PILA_A;
    inicpila(&PILA_A);

    // Cargo valores a Pila A
    do
    {
        printf("\n >>> Pila PILA_A - ");
        leer(&PILA_A);
        system("cls");
        printf("\n                            Ejercicio 10 - Pilas                       \n");
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
        printf("\n                            Ejercicio 10 - Pilas                       \n");
        printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
        printf(" >>> Tu respuesta: ");
        fflush(stdin);
        scanf("%c", &option);
    }while(option == 's' || option == 'S');

    flag = 1; // flag digo que son iguales con 1 y si flag = 0 los valores van a ser diferentes.

    // Creo PILA_A_BASURA, PILA_B_BASURA y las vacio.
    Pila PILA_A_BASURA;
    inicpila(&PILA_A_BASURA);
    Pila PILA_B_BASURA;
    inicpila(&PILA_B_BASURA);


    // Mientras ambas pilas tienen valores hacer . El if compara si con iguales.
    while(!pilavacia(&PILA_A) && !pilavacia(&PILA_B))
    {
        // Comparo y en caso de ser diferentes marcar con bandera (Flag = 1)
        if(tope(&PILA_A) == tope(&PILA_B))
        {
            apilar(&PILA_A_BASURA, desapilar(&PILA_A));
            apilar(&PILA_B_BASURA, desapilar(&PILA_B));
            desapilar(&PILA_B);
        } else
        {
            flag = 0;
            apilar(&PILA_A_BASURA, desapilar(&PILA_A));
            apilar(&PILA_B_BASURA, desapilar(&PILA_B));
        }
    }
    system("cls");

    // Muestro resultados:
    // Comparo si las pilas estan vacias y si no, cual tiene elementos.
    if(pilavacia(&PILA_A)&& pilavacia(&PILA_B))
    {
        // Si ninguna tiene elementos significa que tienen la misma cantidad y flag me avisa si hubo datos distintos
        if(flag == 1){
            printf("\n                            Ejercicio 10 - Pilas                       \n\n");
            printf(">>> Son completamente iguales \n");
        }else
        {
            printf(">>> La PILA A y PILA B tienen la misma cantidad de elementos. \n\n");
            printf(">>> Son distintos en valores. \n\n");
        }
    } else if (!pilavacia(&PILA_A))
    {
        printf("\n                            Ejercicio 10 - Pilas                       \n\n");
        printf(">>> La PILA A tiene mayor cantidad de elementos. \n\n");
    } else
    {
        printf("\n                            Ejercicio 10 - Pilas                       \n\n");
        printf(">>> La PILA B tiene mayor cantidad de elementos. \n\n");
    }

    // Muestro los valores de las pilas

    printf("\n                       >> Remanente PILA_A                       \n");
    mostrar(&PILA_A);
    printf("\n                       >> Remanente PILA_B                       \n");
    mostrar(&PILA_B);



    printf("\n\n");
    system("pause");
    return 0;
}
