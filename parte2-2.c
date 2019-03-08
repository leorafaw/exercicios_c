#include <stdio.h>
#include <stdlib.h>
main()
{
 float n1, n2, n3, n4, total;

 printf("Informe o n1: ");
 scanf("%f", &n1);
 printf("Informe o n2: ");
 scanf("%f", &n2);
 printf("Informe o n3: ");
 scanf("%f", &n3);
 printf("Informe o n4: ");
 scanf("%f", &n4);

 total = (n1*n1)+(n2*n2)+(n3*n3)+(n4*n4);

 printf("Resultado: %.2f", total);
 return 0;
}
