#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int dia, mes;

    printf("Digite o mês de nascimento (1-12): ");
    scanf("%d", &mes);
    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia);

    switch (mes) {
        case 1: // Janeiro
            if (dia >= 20 && dia <= 31)
                printf("Aquário\n");
            else if (dia >= 1 && dia <= 19)
                printf("Capricórnio\n");
            else
                printf("Data inválida\n");
            break;
        case 2: // Fevereiro
            if (dia >= 1 && dia <= 18)
                printf("Aquário\n");
            else if (dia >= 19 && dia <= 29)
                printf("Peixes\n");
            else
                printf("Data inválida\n");
            break;
        case 3: // Março
            if (dia >= 1 && dia <= 20)
                printf("Peixes\n");
            else if (dia >= 21 && dia <= 31)
                printf("Áries\n");
            else
                printf("Data inválida\n");
            break;
        case 4: // Abril
            if (dia >= 1 && dia <= 19)
                printf("Áries\n");
            else if (dia >= 20 && dia <= 30)
                printf("Touro\n");
            else
                printf("Data inválida\n");
            break;
        case 5: // Maio
            if (dia >= 1 && dia <= 20)
                printf("Touro\n");
            else if (dia >= 21 && dia <= 31)
                printf("Gêmeos\n");
            else
                printf("Data inválida\n");
            break;
        case 6: // Junho
            if (dia >= 1 && dia <= 21)
                printf("Gêmeos\n");
            else if (dia >= 22 && dia <= 30)
                printf("Câncer\n");
            else
                printf("Data inválida\n");
            break;
        case 7: // Julho
            if (dia >= 1 && dia <= 22)
                printf("Câncer\n");
            else if (dia >= 23 && dia <= 31)
                printf("Leão\n");
            else
                printf("Data inválida\n");
            break;
        case 8: // Agosto
            if (dia >= 1 && dia <= 22)
                printf("Leão\n");
            else if (dia >= 23 && dia <= 31)
                printf("Virgem\n");
            else
                printf("Data inválida\n");
            break;
        case 9: // Setembro
            if (dia >= 1 && dia <= 22)
                printf("Virgem\n");
            else if (dia >= 23 && dia <= 30)
                printf("Libra\n");
            else
                printf("Data inválida\n");
            break;
        case 10: // Outubro
            if (dia >= 1 && dia <= 22)
                printf("Libra\n");
            else if (dia >= 23 && dia <= 31)
                printf("Escorpião\n");
            else
                printf("Data inválida\n");
            break;
        case 11: // Novembro
            if (dia >= 1 && dia <= 21)
                printf("Escorpião\n");
            else if (dia >= 22 && dia <= 30)
                printf("Sagitário\n");
            else
                printf("Data inválida\n");
            break;
        case 12: // Dezembro
            if (dia >= 1 && dia <= 21)
                printf("Sagitário\n");
            else if (dia >= 22 && dia <= 31)
                printf("Capricórnio\n");
            else
                printf("Data inválida\n");
            break;
        default:
            printf("Mês inválido\n");
    }

    return 0;
}
