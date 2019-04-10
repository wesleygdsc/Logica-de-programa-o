#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL,"Portuguese");
system("color 79");
float A, B, C;
printf ("somar  valores\n");
printf ("digite o valor A");
scanf ("%f", &A);
printf ("digite o valor B");
scanf ("%f", &B);
C=(A+B);
printf ("o valor da soma é igual a%f",C);
return 0;
}
