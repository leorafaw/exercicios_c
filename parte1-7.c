#include <stdio.h>
#include <stdlib.h>
main()
{
    float numero1, numero2, numero3, numero4, media;
    printf("Digite um número: ");
    scanf("%f", numero1);
    printf("\nDigite outro número: ");
    scanf("%f", numero2);
    printf("\nDigite outro número: ");
    scanf("%f", numero3);
    printf("\nDigite outro número: ");
    scanf("%f", numero4);

    media = ((numero1*1)+(numero2*2)+(numero3*3)+(numero4*4)/1+2+3+4);

    printf("Media ponderada dos quatro números: %f", media);

    return 0;
}
