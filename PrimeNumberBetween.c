// program to print prime number between 50 to 100

#include <stdio.h>

int main() {
    int i, j;

    printf("Prime numbers between 50 and 100:\n");

    for (i = 50; i <= 100; i++) {
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
