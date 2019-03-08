#include <stdio.h>
#include <stdlib.h>
main()
{
    float prestacaoAtual, prestacaoJuros, taxa, tempo;
    printf("Digite o valor da parcela sem juros: ");
    scanf("%f", &prestacaoAtual);
    printf("\nDigite o valor da taxa ex: 50: ");
    scanf("%f", &taxa);
    printf("\nInforme a quantidade de meses em atraso: ");
    scanf("%f", &tempo);

    prestacaoJuros = prestacaoAtual+(prestacaoAtual*(taxa/100)*tempo);

    printf("\nVALOR DA PARCELA COM OS JUROS CALCULADOS: %.2f", prestacaoJuros);
    return 0;
}
