#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL,"Portuguese");
system("color 79");
float C, K;
printf ("converte de celcius para kelvins\n");
printf ("digitea temperatura em celcius");
scanf ("%f", &C);
K=C+273.15;
printf ("a temperatura em kelvins é %f ", K);
printf("Tecle enter para sair do DOS/n");
return 0;
}
