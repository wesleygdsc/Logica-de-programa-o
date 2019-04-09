#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL,"Portuguese");
system("color 79");
float A, B, C, D, X1, X2;
printf ("O valor de A\n");
scanf("%f",&A);
printf(" O valor de B\n");
scanf("%f",&B);
printf ("o valor de C\n");
scanf ("%f",&C);
D= pow (B,2)-4*A*C;
printf("delta é iagual a %f\n",D);
X1=(-B+sqrt(D))/2*A;
printf ("X1 é igual a %f\n" ,X1);
X1=(-B-sqrt(D))/2*A;
printf ("X2 é igual a %f\n" ,X2);
	return 0;
}
