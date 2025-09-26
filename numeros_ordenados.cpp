#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    float a, b;

    printf("Digite o 1° número: ");
    scanf("%f%*c", &a);
    printf("Digite o 2° número: ");
    scanf("%f%*c", &b);

    if (a<b)
    printf("A ordem dos números é: %.2f", b, " e depois ", a);
    else
    printf("A ordem dos números é: %.2f", a, " e depois ", b);
}