#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
float n1,n2,n3,n4,md;
printf("digite a nota do primeiro bimestre: ");
scanf("%f",&n1);
printf("digite a nota do segundo bimestre: ");
scanf("%f",&n2);
printf("digite a nota do terceiro bimestre");
scanf("%f",&n3);
printf("digite a nota do quarto bimestre");
scanf("%f",&n4);

md=(n1+n2+n3+n4)/4;
if (md>=7){
	printf("aluno alcancou a media: %.2f \n", md);
	printf ("aprovado");
	}
else {
	printf("aluno nao alcancou a media: %.2f \n", md);
	printf ("reprovado");
	    }
 system("PAUSE");
 return 0;
}

