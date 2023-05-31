// "Printing Numbers Less than 10, Skipping Number 6: Utilizing the Continue Statement in a For Loop"

#include <stdio.h>
int main(){
 int i = 1;
 for(i; i < 10; i++){
  if(i == 6){
    continue;     /* continue statement skip all the number 
                    which returns true in if conditon
                   (i.e here number 6 skips cause when i = 6, if conditon returns true )
                    and continue the next iteration from 7 to 9;
                    */ 
  }
  printf("%d ", i);

 }
}
