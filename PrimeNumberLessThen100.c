#include <stdio.h>

int main() {
    int i, j;
    printf("Prime numbers less than 100:\n");

    for (i = 2; i < 100; i++) {
        int isPrime = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
