#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL,"Portuguese");
system("color 79");
float P, A, IMC;
printf ("calcular IMC\n");
printf ("digite o peso");
scanf ("%f", &P);
printf ("digite a altura");
scanf ("%f", &A);
IMC=P/pow(A,2);
printf ("o IMC é de %2.2f ", IMC);
printf("Tecle enter para sair do DOS/n");
return 0;
}
