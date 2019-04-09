#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL,"Portuguese");
system("color 79");
float R, H, AS, AL, AT;
printf("digite o valor do raio");
scanf("%f",&R);
printf("digite o valor da altura");
scanf("%f",&H);
AS=(3.14)*pow(R,2);
AL=(2*3.14*R*H);
AT=(2*AS*AL);
printf(" o valor da area total da lata é de%f",AT);
	return 0;
}
