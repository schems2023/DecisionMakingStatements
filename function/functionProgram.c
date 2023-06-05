#include <stdio.h>
// program to sum of any number , using void return type

void sum(int, int);              // function declaration with void return type:

int main(){
 int a, b;
 printf("enter the number1: ");
 scanf("%d", &a);
 printf("enter the number2: ");
 scanf("%d", &b);
 sum(a, b);                      //  calling function  with no return type , 
}
void sum(int x, int y){          // called function with void return type
 int result ;
 result = x + y;
 printf("result = %d", result);
 
}