#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]) {	
setlocale (LC_ALL, "Portuguese");
int n;
printf("Digite o n�mero inteiro");
scanf("%d",&n);

if (n % 2 == 0){
	printf("O n�mero � par %d\n", n);
}
else { 
	
	printf("O n�mero � impar%d\n", n);
}
system ("PAUSE");
return 0;



}

