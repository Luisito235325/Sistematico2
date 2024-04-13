#include <stdio.h>

//Leer el precio de un producto y otorgar el 15% de descuento, mostrar el precio original, el descuento y el nuevo precio.
int main(int argc, char const *argv[])
{
    float producto, descuento, nuevoPrecio;  

    printf("Buen dia, bienvenido a nuestra tienda\n");
    printf("Cuanto cuesta el producto que desea comprar?\n");
    scanf("%f", &producto);

    descuento = producto * 0.15;
    nuevoPrecio = descuento + producto;

    printf("El precio sin descuento de su producto es:%.2f\n", producto);
    printf("El descuento es de: %.2f\n", descuento);
    printf("El precio del producto con el descuento es de: %.2f\n", nuevoPrecio);


    return 0;
    
}
