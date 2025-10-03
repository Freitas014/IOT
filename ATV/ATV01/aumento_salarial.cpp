#include <stdio.h>
#include <locale.h>

int main () {
		setlocale(LC_ALL, "Portuguese");
	float salario_atual, novo_salario;
	
	//Mostra a mensagem antes da leitura do salário
	printf("\nDigite o salario do funcionario: ");
	//Recebe o salário
	scanf("%f%*c", &salario_atual);
	//novo salario 
	novo_salario = salario_atual*1.25;
	//Exibe salário
	printf("O salário com reajustes é: R$ %.2f\n", novo_salario);
	
	return 0;
}
