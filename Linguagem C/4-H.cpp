#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL,"Portuguese");
system("color 79");
float R,V;
printf(" digite o raio do da esfera ");
scanf("%f",&R);
V=(4*3.14)*pow(R,3)/3;
printf("o volume da esfera é de%f" ,V);
	return 0;
}
