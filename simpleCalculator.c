
#include <stdio.h>


int main(){

 int  operand1,operand2, sum;
 char operation;

 printf("enter the operation : + - * / %% \n ");
 scanf("%c", &operation);

 printf("enter the operand1: \n ");
 scanf("%d", &operand1);

 printf("enter the operand2: \n ");
 scanf("%d", &operand2);

switch (operation)
 {
 case '+':
  sum = operand1 + operand2 ;     
  printf("sum of two operand %d ", sum);
  break;
 
 
 case '-':
  printf("substract of two operand %d ", operand1 - operand2 );
  break;
 
 case '*':
  printf("Multiplication of two operand %d", operand1 * operand2 );
  break;
 
 case '/':
  printf("division of two operand %d", operand1 / operand2 );
  break;
 
 case '%':
  printf("Modulus  of two operand %d ", operand1 % operand2 );
  break;

 default:
  printf("operation is not valid ");
   break;
 }

return 0;
}