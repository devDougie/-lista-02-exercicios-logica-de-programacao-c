#include <stdio.h>

int main(){
	int i,vetor[20];
	for(i=0;i<20;i++){
		vetor[i]=i+2;
		if(i%2==0){
			printf("[%d] ",vetor[i]);
		}
	}
	return 0;
}