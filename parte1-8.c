#include <stdio.h>
#include <stdlib.h>
main()
{
    float valor, vAjustado;

    printf("Informe o valor da aplica��o: ");
    scanf("%f", valor);

    vAjustado = valor+(valor*0.01);

    printf("O valor reajustado �: %f", vAjustado);

    return 0;
}
