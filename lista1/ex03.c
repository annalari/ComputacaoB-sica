#include <stdio.h>
#include <stdlib.h>

int main(){
	double salario, novoSalario;
	scanf("%lf",&salario);

	novoSalario = (salario*0.25)+salario;
	printf("%.2lf\n",novoSalario);
	
	return 0;
}
