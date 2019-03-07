#include <stdio.h>
#include <stdlib.h>
main()
{
    float valor, vAjustado;

    printf("Informe o valor da aplicação: ");
    scanf("%f", valor);

    vAjustado = valor+(valor*0.01);

    printf("O valor reajustado é: %f", vAjustado);

    return 0;
}
