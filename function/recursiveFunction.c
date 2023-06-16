// program to find the factorial number of n using recursive function:

#include <stdio.h>

int factorial(int);

int main(){

 int n, factNum;

 printf("enter the value of n: ");
 scanf("%d", &n);
 factNum = factorial(n);
 printf("factorial number = %d ", factNum);
 return 0;

}

int factorial(int n){
 if(n == 0){                // if condition is the base case 
  return 1;
 }else {
  return n * factorial(n-1);       // recursive function
 }
}


