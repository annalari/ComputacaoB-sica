#include <stdio.h>
#include <stdlib.h>

int main(){
	double salarioBase, salarioFinal;
	scanf("%lf",&salarioBase);

	salarioFinal = (salarioBase*0.05)+salarioBase;
	salarioFinal = salarioFinal-(salarioBase*0.07);
	
	printf("%.2lf\n",salarioFinal);

	return 0;

}
