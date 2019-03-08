#include <stdio.h>
#include <stdlib.h>
main()
{
    float cotacaoDolar, valorReal, valorDolar;

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacaoDolar);
    printf("Digite um valor em dolar: ");
    scanf("%f", &valorDolar);

    valorReal = valorDolar * cotacaoDolar;

    printf("%.2f$ em reais sao: %.2f R$", valorDolar, valorReal);
}
