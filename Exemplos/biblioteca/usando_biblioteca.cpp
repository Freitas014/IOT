#include <stdio.h>
#include <locale.h>
#include "C:\Users\luis_f_de-freitas\Documents\GitHub\IOT\Exemplos\biblioteca\rotinas.h"

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, res;
		sub_rotina1();
		sub_rotina2();
		printf("Digite um número: ");
		scanf("%d%*c", &num1);
		printf("Digite outro número: ");
		scanf("%d%*c", &num2);
		res =  sub_rotina3(num1, num2);
		printf("resltado = %d", res);
	getchar();
	return 0;
}