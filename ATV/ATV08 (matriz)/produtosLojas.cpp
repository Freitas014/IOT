#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float preco[8][4];
    int i, j;

    char lojas[8][30] = {
        "Loja 1", "Loja 2", "Loja 3", "Loja 4",
        "Loja 5", "Loja 6", "Loja 7", "Loja 8"
    };

    char produtos[4][30] = {
        "Camisa", "Calça", "Sapato", "Boné"
    };

    for (i = 0; i < 8; i++) {
        printf("\n%s\n", lojas[i]);
        for (j = 0; j < 4; j++) {
            printf("Preço do produto %s: R$ ", produtos[j]);
            scanf("%f", &preco[i][j]);
        }
    }

    // Verificação
    printf("\nProdutos com preço até R$60,00:\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 4; j++) {
            if (preco[i][j] <= 60.0) {
                printf("%s - %s: R$ %.2f\n", produtos[j], lojas[i], preco[i][j]);
            }
        }
    }

    return 0;
}
