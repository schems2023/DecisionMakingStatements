#include <stdio.h>

// To find the sum of the first "n" natural numbers, where n is postive integer;

int main(){
 int i=1, n, sum  = 0;

 printf("enter the positive integer number 'n' : ");
 scanf(" %d", &n);

 while( i <= n ){
  printf(" %d ", i);                // it prints the first n natural numbers:
  sum += i;                         // sum = sum + i :
  i++;                              // increment i by 1;  i = i+1
 }
 printf("\nThe sum of the first %d natural numbers = %d ", n, sum);
}