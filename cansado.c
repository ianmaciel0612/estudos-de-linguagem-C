#include <stdio.h>
#include <locale.h>
#define TAM 5

int main() {
	setlocale(LC_ALL,"");
	
	int vetor[TAM];
	int i ;
	int numero;
	
	printf("\ndigite os seus numeros:");
	for(i = 0; i < TAM; i++);{
	printf("\ndigite o numero:");
	scanf("%f", &numero);
	
}
	printf("4 numero maior!");

	return 0;
}
