#include <stdio.h>

int main() {
    int i, j, soma;

    for(i = 1; i <= 100; i++) {
        soma = 0;

        for(j = 1; j < i; j++) {
            if(i % j == 0)
                soma += j;
        }

        if(soma == i)
            printf("%d eh perfeito\n", i);
    }

    return 0;
}