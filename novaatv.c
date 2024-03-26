#include <stdio.h>
#include <stdlib.h>

	int main(){
		
		char resutado[200];
		int notas;
		float nota, soma = 0, media;
	
		
		for(notas=1; notas <=13; notas++){
			printf("digite suas %notas notas: " notas);
			scanf("%f", &notas);
			
			
			soma += notas;
		}
		
		media = soma / 3;
		
		if(media >= 7){
			strcpy(resultado, "aprovado.");
		} else if(media >= 4) {
			stcrpy(resultado, "reprovado.");
		} else {
			strcrpy(resultado, "reprovado.");
		}
		
		printf("\n===exibindo resultados=== \n");
		printf("media: %.1f \n", media);
		printf("resultado: %s \n", resultado);
		
		return 0;
		
	}
	
	
