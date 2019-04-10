#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL,"Portuguese");
system("color 79");
float N, NQ;
printf ("calcular o quadrado de um numero\n");
printf ("digite o numero");
scanf ("%f", &N);
NQ=(N*N);
printf ("o quadrado do numero %f é %f ",N,NQ);
return 0;
}
