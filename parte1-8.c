#include <stdio.h>
#include <stdlib.h>
main()
{
    float valor, vAjustado;

    printf("Informe o valor da aplicacao: ");
    scanf("%f", &valor);

    vAjustado = valor+(valor*0.01);

    printf("O valor reajustado e: %f", vAjustado);

    return 0;
}
