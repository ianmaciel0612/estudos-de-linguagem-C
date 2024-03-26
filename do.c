#include <stdio.h>


	int main(){
		 
		 
		 float nota
		 
		 
		 do {
		 	 printf("escreva a nota do aluno: \n");
		 	 scanf("%f", &nota);
		 	 
		 } while (nota < 0  || nota > 10);
		 
		 
		 printf("\n=== exibindo nota=== \n");
		 printf("nota: %.1f \n", nota);
		 

	
		
		 
		 return 0;
	}
