#include<stdio.h>
#include<stdlib.h>

int main(){
	int numero[300],l=0, i=0, j=0;
	do{
		scanf("%d",&l);
		if(l>=0){
			numero[i] = l;
			i++;
		}
	}while(l>=0);
	for(j=i-1; j>=0; j--){
		printf("%d\n", numero[j]);
	}	
	
return 0;

}
