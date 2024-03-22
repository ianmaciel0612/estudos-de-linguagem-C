#include <stdio.h>
#include <locale.h>

	
	int main(){
		
		int quantidade;
		float preco, custoTotal ;
		
		printf("digite a quantodades de maçãs desejadas: ");
		scanf("%i", &quantidade);
		
		if (quantidade < 12) {
			preco = 1.30;
		}else {
			preco = 1.0;
		}
	
		custoTotal = preco * quantidade;
	
	printf ("quantidade de maçãs: %i \n" , quantidade);
	printf ("custo total: R$ %.2f \n", custoTotal);
	
	return 0;
}
