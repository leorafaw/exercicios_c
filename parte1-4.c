#include <stdio.h>
#include <stdlib.h>
main()
{
    float numero1, numero2, soma;
    printf("Digite um n�mero: ");
    scanf("%f", numero1);
    printf("\nDigite outro n�mero: ");
    scanf("%f", numero2);

    soma = numero1+numero2;

    printf("Soma dos dois n�meros: %f", soma);

    return 0;
}
