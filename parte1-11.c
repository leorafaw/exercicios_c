#include <stdio.h>
#include <stdlib.h>
main()
{
    float base, altura, area;
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("\nDigite a altura desse triangulo: ");
    scanf("%f", &altura);

    area = (base*altura)/2;

    printf("Area do triangulo: %f", area);

    return 0;
}
