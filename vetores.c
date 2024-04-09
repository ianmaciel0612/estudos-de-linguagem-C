#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	
	
	int vetor[5];
	int i;
	
	printf("digite os elementos do vetor: \n");
	for(i = 0; i < 5; i++) {
		printf("elemento %d:", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i < 5; i++) {
		printf("elemento %d: %d\n", i + 1, vetor[i]);
	
	}
	
}
