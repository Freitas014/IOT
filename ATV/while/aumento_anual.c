#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int ano, atual;
    double salario = 1000;
	double percentual = 0.015;
	//informar o ano
    printf("Digite o ano atual: ");
    //armazenao ano na variável ATUAL
    scanf("%d", &atual);
    //Impede de digitar um ano menor que o ano inicial
    if(atual < 2020){
    	printf("Ano Inválido!");
    	return 0;
		}
	ano = 2021;
    while(ano <= atual){
        salario += salario * percentual;
        percentual *= 2; //dobra
        ano++;
    }
    printf("O salario em %d sera: R$ %.2f\n", atual, salario);
    return 0;
}

