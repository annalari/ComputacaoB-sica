#include <stdio.h>
#include <stdlib.h>
#define MAX 3



void reverso(){
  int array[MAX];
  int i;
	for(i=0;i<MAX;i++){
	scanf("%d",&array[i]);
	}	
	
	for(i=MAX-1; i >= 0; i--)
		printf(" %d \n",array[i]);
	

}



int main(){

  reverso();


}
