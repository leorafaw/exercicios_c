#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    float peso, precoKG, total, liquido;

    printf("Informe o peso comprado: ");
    scanf("%f", &peso);
    printf("Informe o preco por KG: ");
    scanf("%f", &precoKG);

    total = peso*precoKG;

    printf("TOTAL A PAGAR: %.2f", total);

    liquido = total*0.83;

    printf("\nTOTAL LIQUIDO: %.2f", liquido);

    return 0;
}
