#include <stdio.h>
#include <stdlib.h>
main()
{
    float numero1, numero2, numero3, numero4, media;
    printf("Digite um n�mero: ");
    scanf("%f", numero1);
    printf("\nDigite outro n�mero: ");
    scanf("%f", numero2);
    printf("\nDigite outro n�mero: ");
    scanf("%f", numero3);
    printf("\nDigite outro n�mero: ");
    scanf("%f", numero4);

    media = ((numero1*1)+(numero2*2)+(numero3*3)+(numero4*4)/1+2+3+4);

    printf("Media ponderada dos quatro n�meros: %f", media);

    return 0;
}
