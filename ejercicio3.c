/*Leer el nombre de una persona e imprimir el siguiente saludo: "Hola nombrePersona"*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nombre[40];
    printf("Dime tu nombre: ");
    scanf("%s", nombre);
     printf("Hola %s", nombre);

    return 0;
}
