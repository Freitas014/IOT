#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Digite um numero qualquer \n");
	scanf ("%d", &idade);
	if (idade<=11)
	printf("Você é criança");
	else if (idade<19)
	printf("Você é adolescente");
	else if (idade<25)
	printf("Você é jovem");
	else if (idade<60)
	printf("Você é adulto");
	else 
	printf("Você é idoso");
}