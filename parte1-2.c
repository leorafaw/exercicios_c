#include <stdio.h>
#include <stdlib.h>
main()
{
    float numero1, numero2, numero3, media;

    printf("Digite 3 n�meros: \n");
    scanf("%f %f %f", &numero1, &numero2, &numero3);

    media = (numero1+numero2+numero3)/3;

    printf("M�dia aritm�tica destes 3 n�meros �: %.2f: ", media);

    return 0;
}
