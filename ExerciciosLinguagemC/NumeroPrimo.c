#include <stdio.h>

int main() {
    int num, i, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num <= 1) primo = 0;

    for(i = 2; i < num; i++) {
        if(num % i == 0) {
            primo = 0;
            break;
        }
    }

    if(primo)
        printf("Primo\n");
    else
        printf("Nao primo\n");

    return 0;
}