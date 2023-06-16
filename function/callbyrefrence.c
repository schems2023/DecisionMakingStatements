#include <stdio.h>
// program to swap the values of two variables using recursive function:

void swap(int*, int*);


int main(){

int x , y;
printf("nenter the value of x: ");
scanf("%d", &x);
printf("enter the value of y: ");
scanf("%d", &y);
printf("\nbefor calling function x = %d y = %d ", x, y);
swap(&x, &y);                                                  // address of x and y is passed to the swap function: so it is called call by refrence                                                            
printf("\nafter calling function x = %d y = %d ", x, y);          //here  value of x and y is changes after modification in swap function       

}
void swap (int *x, int *y){
 int temp ; 
 temp = *x;                                                          // *x represent the value at address pointed by variable x 
 *x = *y;
 *y= temp;
 printf("\ninside the sum function : value of x = %d y =  %d", *x, *y);
}