#include <stdio.h>
#include <locale.h>
#define TAM 3

int main() {

	setlocale(LC_ALL,"");
	
	int nota;
	int vetor[TAM];
	int i;
	
	printf("digite sua nota: \n");
	for(i = 0; i < TAM; i++) {
		printf("nota: %d:", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i < TAM; i++) {
		printf("nota: %d\n", i + 1, vetor[i]);
	
	}
	
}

