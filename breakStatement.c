#include <stdio.h>
// C program to print numbers from 1 to 10 using a for loop, but stop the loop when the number 6 is encountered.

int main(){
 for(int i = 1; i <= 10; i++){
  if(i == 6){
   break;        //The break statement in the line if(i == 6) break; causes the loop to terminate prematurely when the value of i is equal to 6. It immediately exits the loop, and no further iterations are performed.                              
  }
 printf("%d ", i);
 }
}