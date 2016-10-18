#include <stdio.h>
#include <stdlib.h>
#define LINHAS 10
#define COLUNAS 10






int main(){

  int max_quad[4] = {0,0,0,0};
  int i,j;
  int matriz[LINHAS][COLUNAS];

  for (i=0; i< LINHAS; i++){
      for(j=0;j<COLUNAS; j++){
          scanf("%d",&matriz[i][j]);
      }
  }

  for (i=0; i< LINHAS; i++){
      for(j=0;j<COLUNAS; j++){
        if(i<=4 && j<=4){
          if(matriz[i][j] > max_quad[0])
              max_quad[0] = matriz[i][j];

        }
        else if(i>=5 && j<=4){
          if(matriz[i][j] > max_quad[1])
              max_quad[1] = matriz[i][j];


       }
       else if(i<=4 && j>=5){
         if(matriz[i][j] > max_quad[2])
             max_quad[2] = matriz[i][j];

       }
       else if(i>=5 && j>=5){
         if(matriz[i][j] > max_quad[3])
             max_quad[3] = matriz[i][j];

       }else{
         //nada
       }




      }
  }
  printf("\n");

  for(i=0;i<=3;i++){

    printf("%d\n", max_quad[i]);
  }

  return 0;
}
