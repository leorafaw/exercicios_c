#include <stdio.h>
#include <stdlib.h>
main()
{
    float base, altura, area, perimetro;
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("\nDigite a altura desse retangulo: ");
    scanf("%f", &altura);

    area = base*altura;
    perimetro = (2*altura)+(2*base);

    printf("Area do retangulo: %f", area);
    printf("\nPerimetro do retangulo %f", area);

    return 0;
}
