#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]) {	
setlocale (LC_ALL, "Portuguese");
float n1,n2;
printf("Digite o primeiro número");
scanf("%f",&n1);
printf("Digite o segundo número");
scanf("%f",&n2);


if (n1>n2){
	printf("A diferença é:%.1f") Res;
	printf("O maior valor é: %f\n", n1);
	}
else {
	printf("o maior valor é: %f\n", n2);
	    }
	    
	    
	    if (n2>n1){
	printf("O menor valor é: %f\n", n1);
	}
else {
	printf("o menor valor é: %f\n", n2);
	    }
 system("PAUSE");
 return 0;
}

