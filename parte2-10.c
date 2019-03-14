#include <stdio.h>
#include <stdlib.h>
main()
{
    float segundos, horas, minutos;

    printf("INFORME O TEMPO DE PRODUCAO EM SEGUNDOS: ");
    scanf("%f", &segundos);

    minutos = segundos/60;

    horas = minutos/60;

    printf("TEMPO DE PRODUCAO EM MINUTOS: %f", minutos);
    printf("\nTEMPO DE PRODUCAO EM HORAS: %f", horas);

    return 0;
}
