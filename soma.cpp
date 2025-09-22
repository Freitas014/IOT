#include <stdio.h>
#include <locale.h>

int main () {
		setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3, num4, soma;
	
	printf("\nDigite o 1° numero: ");
	scanf("%d", &num1);
	
	printf("\nDigite o 2° numero: ");
	scanf("%d", &num2);
	
	printf("\nDigite o 3° numero: ");
	scanf("%d", &num3);
	
	printf("\nDigite o 4° numero: ");
	scanf("%d", &num4);
	
	soma = num1+num2+num3+num4;
	
	printf("O resultado da soma de 4 numeros é de: %d", soma);
    return 0;
}
