#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    float qtdA, qtdB, vlrA, vlrB, IPI, totalV, totUnA, totUnB;
    int codigoA, codigoB;

    printf("Informe o codigo do produto: ");
    scanf("%d", &codigoA);
    printf("Informe a quantidade comprada: ");
    scanf("%f", &qtdA);
    printf("Informe o valor unitario: ");
    scanf("%f", &vlrA);
    printf("Informe o codigo do produto: ");
    scanf("%d", &codigoB);
    printf("Informe a quantidade comprada: ");
    scanf("%f", &qtdB);
    printf("Informe o valor unitario: ");
    scanf("%f", &vlrB);
    printf("Informe a porcentagem de IPI total da venda: ");
    scanf("%f", &IPI);

    totUnA = vlrA*(1+(IPI/100));
    totUnB = vlrB*(1+(IPI/100));

    totalV = (totUnA*qtdA)+(totUnB*qtdB);

    printf("Valor total do produto %d: %.2f", codigoA, totUnA);
    printf("\nValor total do produto %d: %.2f", codigoB, totUnB);

    printf("\nTOTAL A PAGAR: %.2f", totalV);

    return 0;
}
