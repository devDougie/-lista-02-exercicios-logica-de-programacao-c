
#include<stdio.h>

int main(){
	int num[4],a,b,c;
    puts("Digite 4 numeros inteiros: ");
	for(a=0;a<4;a++){
		scanf("%d",&num[a]);
	}
	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
			if(num[a]<num[b]){
				c=num[a];
				num[a]=num[b];
				num[b]=c;
			}
		}
	}
	for(a=0;a<4;a++){
		printf("[%d]",num[a]);
	}
	return 0;
} 