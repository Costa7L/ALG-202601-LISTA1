#include <stdio.h>

int main() {
    float num, soma = 0;
    int count = 0;

    do {
        printf("Digite um numero (negativo para parar): ");
        scanf("%f", &num);

        if(num >= 0) {
            soma += num;
            count++;
        }

    } while(num >= 0);

    if(count > 0)
        printf("Media: %.2f\n", soma / count);
    else
        printf("Nenhum valor valido foi digitado.\n");

    return 0;
}