#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int contador = 1;
    float total_valores_add = 0;
    float maior_preco_final = 0;
    float menor_preco_final = 0;
    float total_impostos = 0;
    float preco_unitario, custo_estocagem, imposto, preco_final;
    char refrigeracao, categoria;
    int qtd_barato = 0, qtd_normal = 0, qtd_caro = 0;
    
    while(contador <=12){
    	preco_unitario, custo_estocagem, imposto, preco_final;
    	refrigeracao, categoria;
    	
    	printf("Produto %d \n", contador);
    	
    	printf("Preço unitário: R$");
    	scanf("%f", &preco_unitario);
    	printf("Refrigeração (S/N)");
    	scanf(" %C", &refrigeracao);
    	printf("categoria (A/L/V): ");
    	scanf(" %c", &preco_unitario);
    	
    	if(preco_unitario <= 20) {
    		if(categoria == 'A' || categoria == 'a')
			custo_estocagem = 2.00;
			else if (categoria == '1')
			custo_estocagem = 3.00;
			else
			custo_estocagem = 4.00;
		}
		else if(categorai == 'A' || categoria 'a');
		custo_estocagem = 5.00;
		else if(categoria == 'L' || categoria == 'l')
		custo_estocagem = 0.00;
		}
	}
	else {
		if(refrigeracao == 'S')
		}
	}
	}
