#include <stdio.h>
#include <stdlib.h>
main()
{
    float numero1, numero2, divisao;
    printf("Digite um n�mero: ");
    scanf("%f", &numero1);
    printf("\nDigite outro n�mero: ");
    scanf("%f", &numero2);

    divisao = numero1/numero2;

    printf("Divisao dos dois n�meros: %f", divisao);

    return 0;
}
