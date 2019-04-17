#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]) {	
setlocale (LC_ALL, "Portuguese");
float n1,n2,Res;
printf("Digite o primeiro número");
scanf("%f",&n1);
printf("Digite o segundo número");
scanf("%f",&n2);
Res=n1-n2;
printf("A diferença é:%.1f", Res);

if (n1>n2){
	printf("O maior valor é: %f\n", n1);
	}
else {
	printf("o maior valor é: %f\n", n2);
	    }
	    
if (n1>n2){
	printf("O menor valor é: %f\n", n1);
	}
else {
	printf("o menor valor é: %f\n", n2);
	    }
	return 0;
}
	




