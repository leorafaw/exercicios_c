#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char nome[10];
    int codigo;
    float preco, precoTotal, comissao, quantidade;

    printf("Informe o nome do vendedor: ");
    scanf(" %s", &nome);
    printf("Informe o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Informe a quantidade vendida: ");
    scanf("%f", &quantidade);
    printf("Informe o preco do produto: ");
    scanf("%f", &preco);

    precoTotal = quantidade*preco;

    comissao = precoTotal*0.05;

    printf("A comissao que %s ganhou nesta venda de valor total %f foi: %f", nome, precoTotal, comissao);

    return 0;
}
