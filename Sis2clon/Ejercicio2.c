#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    float num, resta, cuadrado;

    printf("Dime un numero\n");
    scanf("%f", &num);

    resta = num - 1 ;
    cuadrado = pow (resta, 2);

    printf("El cuadrado del antecesor del numero es: %.2f\n", cuadrado);

    return 0;
}
