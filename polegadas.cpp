#include <stdio.h>
#include <locale.h>

int main () {
		setlocale(LC_ALL, "Portuguese");
	int polegadas, pes, jardas, milhas;
	
	//Informa a quantidade de pés
	printf("\nDigite uma medida em pes: ");
	//Recebe a quantidade de pés e armazena na variável "pes"
	scanf("%d%*c", &pes);
	
	polegadas = pes*12;
	jardas = pes*3;
	milhas = jardas*1760;
	
	// Imprime os resultados de conversão
    printf("A quantidade de pés em outras unidades é: \n");
    printf("A) Polegadas: %d\n", polegadas);
    printf("B) Jardas: %d\n", jardas);
    printf("C) Milhas: %d\n", milhas);

    return 0;
}