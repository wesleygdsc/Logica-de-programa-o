#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]) {	
setlocale (LC_ALL, "Portuguese");
float n1,n2,Res;
printf("Digite o primeiro n�mero");
scanf("%f",&n1);
printf("Digite o segundo n�mero");
scanf("%f",&n2);
Res=n1+n2;
printf("O seu resultado �:%.1f", Res);
if (Res>=25){
	printf("A soma dos n�meros � superior � 25 %d\n", Res);
	}
else {
	printf("A soma dos n�meros esta abaixo de 25 %d\n", Res);
	    }
 system("PAUSE");
 return 0;
}

