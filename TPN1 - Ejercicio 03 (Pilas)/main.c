#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "../Librerias/pila.h"

int main()
{
    setlocale(LC_ALL,"");
    system("color 3e");
    /** 3. Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS
        todos aquellos elementos distintos al valor 8.  */

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

    char option;
    printf("\n                            Ejercicio 3 - Pilas                       \n");

    // Creo una pila DADA, inicializo vacia..
    Pila DADA;
    inicpila(&DADA);

    // Cargo datos a DADA (Mientras option sea s vamos a cargar valores).
    do
    {
        printf("\n >>> Pila DADA - ");
        leer(&DADA);
        system("cls");
        printf("\n                            Ejercicio 3 - Pilas                       \n");
        printf("\n >>> Pulse S o s para cargar otro valor o cualquier tecla para contiuar. \n");
        printf(" >>> Tu respuesta: ");
        fflush(stdin);
        scanf("%c", &option);
    }while(option == 's' || option == 'S');

    // Creo una pila DISTINTOS, inicializo vacia.
    Pila DISTINTOS;
    inicpila(&DISTINTOS);

    // Creo una pila BASURA, inicializo vacia.
    Pila BASURA;
    inicpila(&BASURA);

    // Pasar los datos a destino.(Mientras Origen tenga datos, pasarlos a DESTINO).
    while(!pilavacia(&DADA))
    {
        if(tope(&DADA) == 8) // si tope (ultimo valor) de DADA es 8 lo dejo BASURA
        {
            apilar(&BASURA, desapilar(&DADA));
        } else
        {
            apilar(&DISTINTOS, desapilar(&DADA));
        }
    }

    // Mostrar el contenido de las pilas.
    system("cls");
    printf("\n                  >> Pila DADA                       \n");
    mostrar(&DADA);
    printf("\n                  >> Pila DISTINTOS                       \n");
    mostrar(&DISTINTOS);
    printf("\n                  >> Pila BASURA                       \n");
    mostrar(&BASURA);


    printf("\n\n");
    system("pause");
    return 0;
}
