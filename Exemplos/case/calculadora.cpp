#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
    int operacao;
    float num1, num2, resultado;

    printf("Digite o primeiro numero: \n");
    scanf("%1f", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%1f", &num2);
    printf("Digite a operação que deseja fazer: \n 1-'+' para Soma \n 2-'-' para subtração \n 3-'/' para divisão \n 4-'*' para multiplicação\n");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            resultado = num1+num2;
            printf("O resultado da soma é: %.2f\n", resultado);
            break;

}
  switch (operacao) {
        case '-':
            resultado = num1-num2;
            printf("O resultado da soma é: %.2f\n", resultado);
            break;

}
     switch (operacao) {
        case '/':
            resultado = num1/num2;
            printf("O resultado da soma é: %.2f\n", resultado);
            break;

}
     switch (operacao) {
        case '*':
            resultado = num1*num2;
            printf("O resultado da soma é: %.2f\n", resultado);
            break;
}
 return 0;
}