#include <stdio.h>

// program to print numbers from 1 to 10 using a goto statement and a labeled loop.

int main(){
 int i = 1;
 loop:                                  
 printf("%d ", i);
 i++;
 if(i <=10 ){
  goto loop;                       
 }
}




/*In this program, the goto statement is used to create a labeled loop. 
  The label loop: is placed before the printf statement.
  After printing the value of i, the i variable is incremented.
  The if condition checks if i is less than or equal to 10.
  If true, the program jumps to the loop label using goto, and the loop continues until the condition becomes false.
  This approach allows for repetitive execution without using conventional loop constructs.
*/  