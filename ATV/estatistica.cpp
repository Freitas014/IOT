#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
	int codigo, veiculos, acidentes;
    int codMaior, codMenor;
    int somaVeiculos, somaAcidMenos2000,qtdMenos2000;
    float maiorIndice, menorIndice;
    
    somaVeiculos = 0;
    somaAcidMenos2000 = 0;
    qtdMenos2000 = 0;
    maiorIndice = -1;
    menorIndice = 999999;
    
    for (i = 1; i<=5; i++) {
    	printf("Cidade %d: \n", i);
    	printf("Código da cidade: ");
    	scanf("%d", &codigo);
    	printf("Numero de veiculos de passeio: ");
    	scanf("%d", &veiculos);
    	printf("Numero de acidentes com vitimas: ");
    	scanf("%d", &acidentes);
    	
    	
    	float indice =  (float)acidentes / veiculos;
    	
    	if (indice >maiorIndice){
    		maiorIndice = indice;
    		codMaior = codigo;
		}
		if (indice < menorIndice){
			menorIndice = indice;
			codMenor = codigo;
		}
		
		somaVeiculos += veiculos;
		
		if(veiculos < 2000) {
			somaAcidMenos2000 += acidentes;
			qtdMenos2000++;
		}
	}
		//Resultados//
		printf("Maior indice de acidentes: %.2f Cidade %d\n", maiorIndice, codMaior);
		printf("Menos indice de acidentes: %.2f Cidade %d\n", menorIndice, codMenor);
		printf("Media de veiculsos nas 5 cidades: %.2f \n", (float)somaVeiculos/5);
		if (qtdMenos2000 > 0)
		printf("Media de acidentes nas cidades com menos de 2000 veículos: %.2f ");
		else
			printf("Nenhuma cidade com menos de 2000 veiculos. \n");
			return 0;
		}