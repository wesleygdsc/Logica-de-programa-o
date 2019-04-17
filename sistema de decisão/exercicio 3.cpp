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
Res=n1+n2;
printf("O seu resultado é:%.1f", Res);
if (Res>=25){
	printf("A soma dos números é superior á 25 %d\n", Res);
	}
else {
	printf("A soma dos números esta abaixo de 25 %d\n", Res);
	    }
 system("PAUSE");
 return 0;
}

