// program to print sum of any number using int return type:

#include <stdio.h>

int sum(int num1, int num2) {              //  funtion definition or called function with int returntype
    int add = num1 + num2;
    return add;                         // here we return integer datatype add, 
                                       //  so we must use int returntype in function defintion, calling function and function declaration 
}

int main() {
    int number1, number2;
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    int result = sum(number1, number2);         // calling function with int returntype ,                                              // calling function is used after the function defintion ,so we don't need function declaration in this program
    printf("The sum of %d and %d is: %d\n", number1, number2, result);

    return 0;
}


