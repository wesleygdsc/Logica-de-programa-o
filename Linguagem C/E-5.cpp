#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL,"Portuguese");
system("color 79");
float A, B, M;
printf ("calcular media\n");
printf ("digite o primeiro numero");
scanf ("%f", &A);
printf ("digite o segundo numero");
scanf ("%f", &B);
M=(A+B)/2;
printf ("a media é %f ",M);
return 0;
}
