#include <stdio.h>

int main() {
    float a, b, c, media, maior, menor;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &a, &b, &c);

    maior = menor = a;

    if (b > maior) maior = b;
    if (c > maior) maior = c;

    if (b < menor) menor = b;
    if (c < menor) menor = c;

    media = (a + b + c) / 3;

    printf("Maior: %.2f\nMenor: %.2f\nMedia: %.2f\n", maior, menor, media);

    return 0;
}