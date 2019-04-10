#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL,"Portuguese");
system("color 79");
float V, P;
printf ("calcular o perimetro de um quadrado\n");
printf ("digite o valor de um dos lados");
scanf ("%f", &V);
P=(4*V);
printf ("o perimetro do quadrado é de %f",P);
return 0;
}
