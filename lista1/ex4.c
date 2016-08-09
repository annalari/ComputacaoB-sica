#include <stdio.h>
#include <stdlib.h>

double faz_tudo(float salario,float perce_aumento){
 
  double aumento = salario*perce_aumento/100;
  double n_salario = salario+aumento;
  printf("%.2lf %.2lf",aumento,n_salario);

}

main(){
 float salario=0;
 float percent=0;
 
 scanf("%f %f", &salario, &percent);
 faz_tudo(salario,percent); 

 
}
