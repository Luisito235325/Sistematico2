//Calcular el cubo de un numero 
#include<stdio.h>
#include<math.h>

int main (int argc, char const *argv[])

{
   
   int num, cubo;

   printf ("Introduce un numero: ");
   scanf("%d",&num);

   if (num > 0){
    cubo = pow (num,3);
    printf("El cubo de %d es: %d", num,cubo);
   }


    return 0;

}
