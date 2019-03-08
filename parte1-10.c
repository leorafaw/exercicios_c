#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    float raio, perimetro, area;

    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    perimetro = (2*M_PI*raio);

    area = (M_PI*(raio*raio));


    printf("Perimetro do circulo: %.2f", perimetro);
    printf("\nArea do circulo: %.2f", area);
}
