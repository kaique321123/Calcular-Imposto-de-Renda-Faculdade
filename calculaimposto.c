#include <stdio.h>


int main() {
double salario;
printf("Insira seu salario: ");
scanf("%lf", &salario);

if (salario <=1903.98) {printf("Isento \n");}

else if (salario >1903.98 && salario <2826.65) {printf("Deve pagar 7,5%% de imposto que= %.2lf \n", salario*0.075);}

else if (salario >2826.66 && salario <3751.05) {printf("Deve pagar 15%% de imposto que= %.2lf \n", salario*0.15);}

else if (salario >3751.05 && salario <4664.68){printf("Deve pagar 22,5%% de imposto que= %.2lf \n", salario*0.225);}
 
else {printf("Deve pagar 27,5%% de imposto que= %.2lf \n", salario*0.275);} 

 return 0;

}