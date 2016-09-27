#include <stdio.h>
#include <stdlib.h>
#define LINHAS  3 
#define COLUNAS 5

void calcula_maior(){
 int i,j,k;
 int matriz[LINHAS][COLUNAS];

 for(i = 0; i< LINHAS; i++){
     for(j=0;j<COLUNAS; j++){
		scanf("%d",&matriz[i][j]);
		} 
 }


 int maior = 0,soma=0, l;;
 for(i = 0; i< LINHAS; i++){
     for(j=0;j<COLUNAS; j++){
     	 	
	soma += matriz[i][j];
    if(soma > maior) {
        maior = soma;
		l = i;
	}


  }     
 }


 printf("****%d*****", l+1);
}


int main(){


 calcula_maior();
}

