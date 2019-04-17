#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]) {	
setlocale (LC_ALL, "Portuguese");
int n;
printf("Digite o número inteiro");
scanf("%d",&n);

if (n % 2 == 0){
	printf("O número é par %d\n", n);
}
else { 
	
	printf("O número é impar%d\n", n);
}
system ("PAUSE");
return 0;



}

