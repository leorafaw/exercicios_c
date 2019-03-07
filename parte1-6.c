#include <stdio.h>
#include <stdlib.h>
main()
{
    float numero1, numero2, divisao;
    printf("Digite um número: ");
    scanf("%f", &numero1);
    printf("\nDigite outro número: ");
    scanf("%f", &numero2);

    divisao = numero1/numero2;

    printf("Divisao dos dois números: %f", divisao);

    return 0;
}
