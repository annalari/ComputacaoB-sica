#include<stdio.h>
#include<stdlib.h>

int main(){
	float salario, novoSalario;
	scanf("%f",&salario);

	novoSalario = (salario*0.25)+salario;

	printf("%.2f\n",novoSalario);

	return 0;

}
