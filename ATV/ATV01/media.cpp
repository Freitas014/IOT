#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	const char quant_provas = 3;
	float nota1, nota2, nota3, media;
	
	//recebe o valor da nota1
	printf("\nInsira a nota da primeira prova: ");
	//armazena o valor da nota3
	scanf("%f%*c", &nota1);
	//recebe o valor da nota1
	printf("\nInsira a nota da segunda prova: ");
	//armazena o valor da nota3
	scanf("%f%*c", &nota2);
	//recebe o valor da nota1
	printf("\nInsira a nota da terceira prova: ");
	//armazena o valor da nota3
	scanf("%f%*c", &nota3);
	
	media = (nota1+nota2+nota3)/quant_provas;
	
	printf("A média total do aluno e de: %2.f", media);
}
