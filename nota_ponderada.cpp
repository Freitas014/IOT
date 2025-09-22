#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, resultado1, resultado2, media_total;
	int peso1, peso2, peso3;
	
	//recebe a nota da primeira prova
	printf("\nInsira a nota da primeira prova (0 a 100): ");
	//armazena a nota da primeira prova
	scanf("%f%*c", &nota1);
	//recebe o valor do peso da primeira prova
	printf("\nInsira o peso da primeira prova (1 a 10): ");
	//armazena o peso da primeira prova
	scanf("%d%*c", &peso1);
	
	//recebe a nota da segunda prova
	printf("\nInsira a nota da segunda prova (0 a 100): ");
	//armazena a nota da segunda prova
	scanf("%f%*c", &nota2);
	//recebe o valor do peso da segunda prova
	printf("\nInsira o peso da segunda prova (1 a 10): ");
	//armazena o peso da segunda prova
	scanf("%d%*c", &peso2);
	
	//recebe a nota da terceira prova
	printf("\nInsira a nota da terceira prova (0 a 100): ");
	//armazena a nota da terceira prova
	scanf("%f%*c", &nota3);
	//recebe o valor do peso da terceira prova
	printf("\nInsira o peso da terceira prova (1 a 10): ");
	//armazena o peso da terceira prova
	scanf("%d%*c", &peso3);
	
	resultado1 = (nota1*peso1) + (nota2*peso2) + (nota3*peso3);
	resultado2 = peso1 + peso2 + peso3;
	media_total = resultado1/resultado2;
	
	printf("A média ponderada do aluno e de: %.f", media_total);
}
		