#include <stdio.h>
#include <stdlib.h>
main()
{
    float custoF, percD, imposto, custoC;

    printf("Custo de fabrica: ");
    scanf("%f", &custoF);

    percD = custoF*1,28;

    imposto = custoF*1,45;

    custoC = custoF+percD+imposto;

    printf("Custo para o comprador: %2.f", custoC);

    return 0;
}
