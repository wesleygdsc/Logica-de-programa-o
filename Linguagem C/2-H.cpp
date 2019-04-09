#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL,"Portuguese");
system("color 79");
float S, M, H;
printf("escreva os segundos que vc quer converte");
scanf("%f",&S);
M=(S/60);
H=(M/60);
printf("os valores em hora e em em minutos são respectivamente %f" ,M);
printf("  E %f " ,H);
return 0;
}
