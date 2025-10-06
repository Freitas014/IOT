#include <stdio.h>
#include <locale.h>
#include "C:\Users\luis_f_de-freitas\Documents\GitHub\IOT\Exemplos\biblioteca\positivo&negativo.h"

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	sub_rotina4();
	printf("\nDigite o valor de a: \n");
	scanf("%d%*c", &a);
	printf("\nDigite o valor de b: \n");
	scanf("%d%*c", &b);
	getchar();
	
}
	
	