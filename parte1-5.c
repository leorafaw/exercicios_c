#include <stdio.h>
#include <stdlib.h>
main()
{
    float numero, umTerco;

    printf("Informe um n�mero: ");
    scanf("%f", &numero);

    umTerco = numero/3;

    printf("1/3 do numero digitado �: %f", umTerco);

    return 0;
}
