#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL,"Portuguese");
system("color 79");
float R, A;
printf ("calcular a area de um circulo\n");
printf ("digite o raio");
scanf ("%f", &R);
A=3.14*(R*R);
printf ("a area do circulo é %f", A);
return 0;
}
