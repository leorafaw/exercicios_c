#include <stdio.h>
#include <stdlib.h>
main()
{
    float numero, sucessor, antecessor;

    printf("Digite um n�mero: \n");
    scanf("%f", &numero);

    sucessor = numero+1;
    antecessor = numero-1;

    printf("N�mero digitado: %f", numero);
    printf("\nSeu sucessor: %f", sucessor);
    printf("\nSeu antecessor: %f", antecessor);

    return 0;
}
