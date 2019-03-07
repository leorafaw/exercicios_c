#include <stdio.h>
#include <stdlib.h>
main()
{
    float numero1, numero2, soma;
    printf("Digite um número: ");
    scanf("%f", numero1);
    printf("\nDigite outro número: ");
    scanf("%f", numero2);

    soma = numero1+numero2;

    printf("Soma dos dois números: %f", soma);

    return 0;
}
