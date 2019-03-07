#include <stdio.h>
#include <stdlib.h>
main()
{
    float numero, umTerco;

    printf("Informe um número: ");
    scanf("%f", &numero);

    umTerco = numero/3;

    printf("1/3 do numero digitado é: %f", umTerco);

    return 0;
}
