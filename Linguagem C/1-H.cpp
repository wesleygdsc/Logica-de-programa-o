#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL,"Portuguese");
system("color 79");
float cm, mi, m, dc;
printf (" digite os centimetros\n");
scanf ("%f", &cm);
m = (cm/100);
dc = (cm/10);
mi = (cm/1000);
printf("o valor dos centimetros em metros ser� %f3=\n",m);
printf("o valor dos centimetros em decimetros ser� %f=\n",dc);
printf("o valor dos centimetros em milimetros ser� %f\n=",mi);
return 0;
}
