#include <stdio.h>
#include <locale.h>
#define TAM 4

int main() {
	setlocale(LC_ALL,"");
	
	int vetor[TAM];
	int i;
	float media, soma, notas;
	
	printf("digite as três notas:\n");
	for(i = 0; i < TAM; i++);{
	printf("digite sua nota:\n");
	scanf("%f", &notas);
}
	media = soma / (float) TAM; 
	
	printf("\nesxibindo as notas informadas: \n");
	for (i = 0;  < TAM; i++) {
		printf("%d nota: %.1f \n", i + i, notas[i]);
	}
	printf("\nmedia!");
	
	if(media <= 7) {
		printf("aprovado!");
	} else{
		printf("reprovado");
	}
	return 0;
}
