#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void pideDatoYValida(char[], char[]);
void ordenarNombre(char[], char[], char[]);


int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41];

    pideDatoYValida(nombre, "Ingrese el nombre: ");
    pideDatoYValida(apellido, "Ingrese el apellido: ");

    ordenarNombre(nombre, apellido, nombreCompleto);

    puts(nombreCompleto);

    return 0;
}


void pideDatoYValida(char dato[], char mensaje[])
{
    puts(mensaje);
    fflush(stdin);
    char buffer[1024];
    gets(buffer);
    while(strlen(buffer)>19)
    {
        printf("Reingrese nombre: ");
        fflush(stdin);
        gets(buffer);
    }
    strcpy(dato, buffer);
}

void ordenarNombre(char nombre[], char apellido[], char nombreCompleto[])
{
    strcpy(nombreCompleto, apellido);
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, nombre);

    strlwr(nombreCompleto);

    nombreCompleto[0] = toupper(nombreCompleto[0]); //primer letra

    int i;

    for(i = 0; i < strlen(nombreCompleto); i++)
    {
        if(nombreCompleto[i]==' ')
        {
            nombreCompleto[i+1] = toupper(nombreCompleto[i+1]);
        }
    }
}
