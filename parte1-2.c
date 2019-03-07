#include <stdio.h>
#include <stdlib.h>
main()
{
    float numero1, numero2, numero3, media;

    printf("Digite 3 números: \n");
    scanf("%f %f %f", &numero1, &numero2, &numero3);

    media = (numero1+numero2+numero3)/3;

    printf("Média aritmética destes 3 números é: %.2f: ", media);

    return 0;
}
