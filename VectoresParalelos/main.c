#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 2

void cargarAlumnos(int[], char[][21], int[], float[], int);
void mostrarAlumnos(int[], char[][21], int[], float[], int);
void ordenarNombres(char[][21], int);

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
            ordenarNombres(nombres, T);
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
            printf("Ingrese una opcion valida");
            system("pause");
        }

    }
    while(opcion != 6);
    return 0;
}


void ordenarNombres(char nombres[][21], int tamano)
{
    int i;
    for(i = 0; i < tamano; i++)
    {
        strlwr(nombres[i]);
    }

    for(i = 0; i < tamano; i++)
    {
        puts(nombres[i]);
    }
}


void cargarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int dimension)
{
    int i;
    for(i = 0; i < dimension; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombres[i]);

        printf("Ingrese nota: ");
        scanf("%d", &notas[i]);

        printf("Ingrese altura: ");
        scanf("%f", &alturas[i]);
    }
}

void mostrarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int dimension)
{
    printf("%4s %20s %2s %5s\n","Legajo","Nombre","Nota","Altura");

    int i;
    for(i=0; i<dimension; i++)
    {
        printf("%4d %20s %2d %5f \n", legajos[i], nombres[i], notas[i], alturas[i]);
    }
}


/*
Tarea:

Hacer un menu de opciones, que incluya las siguientes funciones:

-ordene los nombres
-muestre los alumnos aprobados (nota>6))
-muestre los alumnos cuyos nombres comienzan con p
-El alumno con mas nota (sabiendo que puede ser mas que uno)
-Ingresar un legajo y permitir la modificacion de la nota

Transformar la carga en una carga aleatoria
*/
