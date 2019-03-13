#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    float raio, altura, volume;

    printf("Informe o raio da lata: ");
    scanf("%f", &raio);
    printf("Informe a altura da lata: ");
    scanf("%f", &altura);

    volume = M_PI*pow(raio, 2)*altura;

    printf("Volume da lata: %.2f", volume);

}
