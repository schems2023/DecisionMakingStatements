// program to check whether a number entered by the user is prime or not:

#include <stdio.h>
#include <math.h>

int main(){
 int i,n, squareRootNumber;
 printf("enter the number N: ");
 scanf("%d", &n);
 squareRootNumber = (int)sqrt(n);            // typecasting : in default case sqrt() function returns double datatype, 
                                             //  here (int)sqrt(n),  converting the  double datatype to int datatype,
                                             // to use sqrt() function , we have to import <math.h> header file

 for(i = 2; i <= squareRootNumber; i++){
  if(n % i == 0){
   
  }
 


 }
}