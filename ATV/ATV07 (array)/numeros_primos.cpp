#include <stdio.h>

int main(){
    int numeros[9];
    int i, j;

    // Entrada dos 9 números
    for (i = 0; i < 9; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    // Saída: verificar e mostrar os primos
    printf("\nNumeros primos e suas posicoes:\n");
    for (i = 0; i < 9; i++){
        int primo = 1; // assume que é primo

        if (numeros[i] < 2){  
            primo = 0; // menor que 2 não é primo
        } else {
            for (j = 2; j <= numeros[i] / 2; j++){  
                if (numeros[i] % j == 0){
                    primo = 0; // achou divisor, não é primo
                    break;
                }
            }
        }

        if (primo){
            printf("Numero %d no indice %d\n", numeros[i], i);
        }
    }
            printf("\n\n\nLuis Fernando de Freitas");

    return 0;
}
