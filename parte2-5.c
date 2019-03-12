#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    int valor1, valor2, aux;

    valor1 = 1;
    valor2 = 2;

    printf("VALOR 1: %d", valor1);
    printf("\nVALOR 1: %d", valor2);
    aux = valor1;
    valor1 = valor2;
    valor2 = aux;

    printf("\nValor 1 invertido: %d", valor1);
    printf("\nValor 2 invertido: %d", valor2);
    return 0;
}
