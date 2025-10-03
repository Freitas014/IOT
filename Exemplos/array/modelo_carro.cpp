#include <stdio.h>
#include <string.h>

int main() {
    char modelos[5][20];   // vetor de strings para armazenar os modelos
    float consumo[5];      // vetor para armazenar o consumo (km/l)
    int i, indiceMaisEconomico = 0;

    // Entrada dos dados
    for (i = 0; i < 5; i++) {
        printf("Digite o modelo do carro %d: ", i+1);
        scanf("%s", modelos[i]);

        printf("Digite o consumo (km/l): ");
        scanf("%f", &consumo[i]);
    }

    // Descobrir o carro mais econômico
    for (i = 1; i < 5; i++) {
        if (consumo[i] > consumo[indiceMaisEconomico]) {
            indiceMaisEconomico = i;
        }
    }

    printf("\nO carro mais economico e: %s (%.2f km/l)\n\n", 
            modelos[indiceMaisEconomico], consumo[indiceMaisEconomico]);

    // Calcular litros gastos para 1000 km
    printf("Consumo para percorrer 1000 km:\n");
    for (i = 0; i < 5; i++) {
        float litros = 1000.0 / consumo[i];
        printf("%s: %.2f litros\n", modelos[i], litros);
    }
	printf("\n\nLuis Freitas");
    return 0;
}
