#include <stdio.h>

int main() {
    int i, j, soma = 0;

    for(i = 0; i <= 6; i++) {
        for(j = i; j <= 6; j++) {
            soma += i + j;
        }
    }

    printf("Soma total dos pontos do domino: %d\n", soma);

    return 0;
}