#include <stdio.h>

int main() {
    int numeros[10];
    int i;
    int encontrou = 0; // flag para verificar se achou algum número > 50

    // Entrada dos 10 números
    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Verificação e saída
    printf("\nNumeros maiores que 50 e suas posicoes:\n");
    for (i = 0; i < 10; i++) {
        if (numeros[i] > 50) {
            printf("Numero %d na posicao %d\n", numeros[i], i);
            encontrou = 1; // encontrou pelo menos 1
        }
    }

    // Caso nenhum número seja > 50
    if (!encontrou) {
        printf("Nenhum numero maior que 50 foi encontrado.\n");
    }

    return 0;
}
