#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float valorUn[10], totalItens[10], totalVendas = 0;
	float salarioBase = 545.0, comissao;
	int quantVendida[10], maisVendidos = 0;
	int i;
	
	for(i = 0; i < 10; i++){
		printf("Digite o preco unitario do %d produto vendido: ", i+1);
		scanf("%f", &valorUn[i]);
		printf("Informe a quantidade de vendida do produto %d: ", i+1);
		scanf("%d", &quantVendida[i]);
	}
	for(i = 0; i < 10; i++){
		totalItens[i] = valorUn[i] * quantVendida[i];
		totalVendas += totalItens[i];
					
		if(quantVendida[i] > quantVendida[maisVendidos]){
		maisVendidos = i;
		}
	}
	printf(" -- RELATÓRIO --");
	
	for (i = 0; i < 10; i++) {
		printf("\n\n Objeto: %d -> Quantidade Vendida: %d | Valor Unitário: %.2f | Total : %.2f", 
		i+1, quantVendida[i], valorUn[i], totalItens[i]);
}
	printf("\n\n\nValor total das vendas: R$ %.2f", totalVendas);
	
	comissao = salarioBase + (0.05*totalVendas);
	printf("\n\nO salário fixo do funcionário + a comissao é de: %.2f", comissao);
	
	printf("\n\nObjeto mais vendido: Objeto %d (quantidade %d)\n",
           maisVendidos+1, quantVendida[maisVendidos]);
	printf("\n\n\n Luís Fernando");
           return 0;
}
