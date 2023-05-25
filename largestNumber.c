# include <stdio.h>
int main(){

 int firstNumber, secondNumber, thirdNumber;

 printf("enter the firstNUmber\n");
 scanf("%d", &firstNumber);
 printf("enter the secondNUmber\n");
 scanf("%d", &secondNumber);
 printf("enter the thirdNumber\n");
 scanf("%d", &thirdNumber);

 if(firstNumber > secondNumber){
   if(firstNumber > thirdNumber){
    printf("%d is largest", firstNumber);
   }else{
    printf("%d is largest ",thirdNumber );
   }
 }
 else {

  if(secondNumber > thirdNumber){
   printf("%d is largest ", secondNumber);
  }else{
   printf("%d is largest", thirdNumber);
  }


 }




}