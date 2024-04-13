#include <stdio.h>
#include <math.h>

// ejercicio #4
// Leer dos numeros, mostrar el primer número elevado a la 4 potencia y el segundo número elevado al cuadrado.

int main()
{
    float num1, num2, potencia, cuadrado;

    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    potencia = pow(num1, 4);
    cuadrado = pow(num2, 2);

    printf("El primer número elevado a la cuarta potencia es: %.2f\n", potencia);
    printf("El segundo número elevado al cuadrado es: %.2f\n", cuadrado);

    return 0;
}