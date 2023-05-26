// program to print the fibonacci series up to nTerms;


#include <stdio.h>

int main(){

 int i, n1 = 0, n2 = 1, next, nTerms;

 printf("enter the no of nTerms :");
 scanf("%d", &nTerms);

 printf("fibonacci series of   %d terms =  \t",nTerms);

 for(i = 0; i < nTerms; i++){
  if(i == 0 || i == 1){
   next = i;
  printf(" %d ", next);
  }else{
   next = n1 + n2;
  printf(" %d ", next);
   n1 = n2;
   n2 = next;
  }
 }
 return 0;

}