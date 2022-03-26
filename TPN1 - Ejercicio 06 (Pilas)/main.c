#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    /** 6. Pasar el primer elemento (tope) de la pila DADA a su última posición (base),
        dejando los restantes elementos en el mismo orden.  */

    char option = 's';
    int elementoBase;

    printf("\n                            Ejercicio 6 - Pilas                       \n");


    // Creo una pila DADA, inicializo vacia y cargo datos.
    Pila DADA;
    inicpila(&DADA);

    // Cargo datos a DADA (Mientras option sea s vamos a cargar valores).
    do
    {
        printf("\n >>> Pila DADA - ");
        leer(&DADA);
        system("cls");
        printf("\n                            Ejercicio 5 - Pilas                       \n");
        printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
        printf(" >>> Tu respuesta: ");
        fflush(stdin);
        scanf("%c", &option);
    }while(option == 's' || option == 'S');

    // guardo el tope (ultimo valor) para luego colocarlo primero y tambien ya lo saco de DADA
    elementoBase = desapilar(&DADA);

    // Creo una pila DADA, inicializo vacia y cargo datos.
    Pila AUX1;
    inicpila(&AUX1);

    // Itero DADA, Pasando a Auxiliar quedando invertidos
    while(!pilavacia(&DADA))
    {
        apilar(&AUX1, desapilar(&DADA));
    }

    // Coloco la base que era el tope
    apilar(&DADA, elementoBase);

    // Relleno la pila con el resto de los valores en el orden original
    while(!pilavacia(&AUX1))
    {
        apilar(&DADA, desapilar(&AUX1));
    }

    // Mostrar el resultado
    system("cls");
    printf("\n                       >> Pila DADA                      \n");
    mostrar(&DADA);
    printf("\n                       >> Pila Auxiliar                  \n");
    mostrar(&AUX1);



    printf("\n\n");
    system("pause");
    return 0;
}
