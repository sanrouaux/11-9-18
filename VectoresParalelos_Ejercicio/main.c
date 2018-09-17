#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "biblio.h"
#define T 4


int main()
{
    int legajos[T];
    char nombres[T][21];
    int notas[T];
    float alturas[T];
    int opcion;

    cargarAlumnos(legajos, nombres, notas, alturas, T);
    mostrarAlumnos(legajos, nombres, notas, alturas, T);

    do
    {
        printf("\nMENU DE OPCIONES\n");
        printf("1. Ordenar los nombres\n");
        printf("2. Ver alumnos aprobados\n");
        printf("3. Ver alumnos cuyos nombres comienzan con P\n");
        printf("4. Alumno/os con mas nota\n");
        printf("5. Modificar una nota (ingresando legajo)\n");
        printf("6. Salir\n");
        scanf("%d", &opcion);


        switch(opcion)
        {

        case 1:
            ordenAlfabetico(legajos, nombres, notas, alturas, T);
            break;

        case 2:

            break;

        case 3:

            break;

        case 4:

            break;

        case 5:

            break;

        case 6:
            break;

        default:
            printf("Ingrese una opcion valida\n");
            system("pause");
        }
    }
    while(opcion != 6);
    return 0;
}


/*
Tarea:

Hacer un menu de opciones, que incluya las siguientes funciones:

-ordene los nombres
-muestre los alumnos aprobados (nota>6))
-muestre los alumnos cuyos nombres comienzan con p
-El alumno con mas nota (sabiendo que puede ser mas que uno). Primero busco la mayor nota y despues busco los nombres a los que corresponde esa nota
-Ingresar un legajo y permitir la modificacion de la nota. Si no lo encuentra, da error. Si encuentra el legajo

Transformar la carga en una carga aleatoria
*/
