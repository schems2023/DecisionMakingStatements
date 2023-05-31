#include <stdio.h>
/*
  Program to print all the odd numbers less than 100
  using a for loop and the continue statement
*/

int main(){
 printf("odd number less then 100 =\t");
 for(int i = 1; i <= 100; i++){
  if(i % 2 == 0){
   continue;              // Skip  even numbers and continue to the next iteration
  }
 printf("%d ", i);
 }
}



