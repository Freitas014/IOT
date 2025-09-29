#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i = 1;
    float nota1, nota2, media, somaMedia = 0;
    int aprovados = 0, exame = 0, reprovados = 0;
	
	
	while(i <= 6){
    printf("Aluno %d: \n", i);
    printf("Digite a primeira nota: ");
    
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
       
    media = (nota1 + nota2) / 2.0;
    somaMedia += media;
                                           
    printf("Média do aluno: %.1f -> ", media);

	if(media < 3){
        printf("Reprovado\n");
        reprovados++;
    } 
	else if (media <= 7) {
        printf("Exame\n");
        exame++;
    } 
	else{
        printf("Aprovado\n");
        aprovados++;
    }
	i++;
    }

    printf("\n Resumo da turma: \n");
    printf("Aprovados: %d \n", aprovados);
    printf("Exame: %d \n ", exame);
    printf("Reprovados: %d \n", reprovados);
    printf("Media da classe: %.1f \n", somaMedia / 6);
    return 0;
}

