// program to print sum of anytwo number using float return type


#include <stdio.h>

float sum(int num1, float num2) {     // function defintion with differnt datatype argument
    float add = num1 + num2;           
    return add;                 // here it returns float dataype add, so we have to  define function with float return type
}

int main() {
   int number1;
   float number2, result;
    printf("Enter two numbers: ");
    scanf("%d %f", &number1, &number2);
    result = sum(number1, number2);     // calling function with two different datatype argument, (int, float)
    printf("The sum of %d and %.2f is: %.2f\n", number1, number2, result);

    return 0;
}
