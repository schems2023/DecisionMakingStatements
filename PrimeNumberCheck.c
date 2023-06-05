// program to check whther the entered number is prime or not:

#include <stdio.h>

int main() {
    int number, i;
    int isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for (i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrime = 0;              
            break;
        }
    }

    if (isPrime) {                           // if isPrime = 0, number  is not a prime number,
                                             // if isPrime =  1, number is prime number
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
