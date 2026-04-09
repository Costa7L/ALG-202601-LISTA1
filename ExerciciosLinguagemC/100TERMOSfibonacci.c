#include <stdio.h>

int main() {
    long long a = 0, b = 1, c;
    int i;

    printf("Fibonacci:\n");

    for(i = 1; i <= 100; i++) {
        printf("%lld ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}