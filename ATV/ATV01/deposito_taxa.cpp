#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float deposito, taxa, rendimento, total;
	
	//recebe o valor do deposito
	printf("\nDigite o valor do deposito: ");
	//armazena o valor na variavel "deposito".
	scanf("%f%*c", &deposito);
	//recebe o valor da taxa
	printf("\nInsira a taxa de juros: ");
	//armazena o valor na variavel "taxa".
	scanf("%f%*c", &taxa);
	
	taxa = taxa/100;
	rendimento = deposito*taxa;
	total = deposito+rendimento;
	
	printf("O valor do rendimento e de: R$ %.2f\n", rendimento);
	printf("O valor total depois do rendimento e de: R$ %.2f\n", total);
}
