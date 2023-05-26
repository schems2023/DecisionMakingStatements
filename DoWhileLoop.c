/* Write a program  that continuously prompts 
 to enter a character until the character 'n' is entered.
  
*/

#include <stdio.h>
int main(){
 char name = 'n' ;

 do{
  printf("enter the character yes for y and no for n ");
  scanf("%c", &name);
 }while( name != 'n');

return 0;

}