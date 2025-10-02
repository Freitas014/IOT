#include <stdio.h>

int main() {
    float preco[10], totalObjeto[10], totalVendas = 0;
    int quantidade[10], i, maisVendido = 0;
    float salarioBase = 545.0, comissao;

    // Entrada de dados
    for (i = 0; i < 10; i++) {
        printf("Digite o preco unitario do objeto %d: ", i+1);
        scanf("%f", &preco[i]);

        printf("Digite a quantidade vendida do objeto %d: ", i+1);
        scanf("%d", &quantidade[i]);
    }

    // Processamento
    for (i = 0; i < 10; i++) {
        totalObjeto[i] = preco[i] * quantidade[i];
        totalVendas += totalObjeto[i];

        if (quantidade[i] > quantidade[maisVendido]) {
            maisVendido = i;
        }
    }

    // Saída: relatório
    printf("\nRELATORIO DE VENDAS:\n");
    for (i = 0; i < 10; i++) {
        printf("Objeto %d -> Quantidade: %d | Preco: R$ %.2f | Total: R$ %.2f\n",
               i+1, quantidade[i], preco[i], totalObjeto[i]);
    }

    printf("\nValor geral das vendas: R$ %.2f\n", totalVendas);

    // Comissão + salário fixo
    comissao = salarioBase + (0.05 * totalVendas);
    printf("Salario do vendedor + comissao: R$ %.2f\n", comissao);

    // Objeto mais vendido
    printf("Objeto mais vendido: Objeto %d (quantidade %d)\n",
           maisVendido+1, quantidade[maisVendido]);
	
	printf("\n\nLuis Freitas");
    return 0;
}
