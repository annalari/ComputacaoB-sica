#include <stdio.h>
#include <stdlib.h>
#define MAX 10



void reverso(){
  int array[MAX];
  int i=0;

  for(i=0; array[i] >= 0 && i <= MAX; i++){
     scanf("%d",&array[i]);
}
	
	int j;
	for(j=i; j >= 0; j--)
		printf(" %d \n",array[j]);
	

}



int main(){

  reverso();


}
