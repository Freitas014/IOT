#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet[6];
	int matriz[3][6];
	int i, j;
	
	printf("     colunas:        ");
	for (i = 0; i < 6; i++){
		vet[i] = i + 1;
		printf("%d|", vet[i]);
	}
		
	for (i = 0; i<3; i++){
	printf("\nElementos da linha %d ", i);                     
	
	for (j=0; j<6; j++){
		matriz[i][j] = i + j;
		printf("%d|", matriz[i][j]);
	}
}}

		
	                   

	
