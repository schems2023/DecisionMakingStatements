#include <stdio.h>

void swap(int, int);


int main(){


int x , y;
printf("nenter the value of x: ");
scanf("%d", &x);
printf("enter the value of y: ");
scanf("%d", &y);
printf("\nbefor calling function x = %d y = %d ", x, y);
swap(x, y);                                                               
printf("\nafter calling function x = %d y = %d ", x, y);            // no changes in values          

}
void swap (int x, int y){
 int temp ;
 temp = x;
 x = y;
 y= temp;
 printf("\ninside the sum function : value of x = %d y =  %d", x, y);
}