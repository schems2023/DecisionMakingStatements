#include <stdio.h>


int main(){
 int percentage;

printf("enter the percentage: ");
scanf("%d", &percentage);

if(percentage >= 80){
 printf("Distinction");
}

else if ( percentage >= 70 && percentage < 80)
{
 printf("first Division");
}

else if ( percentage >=  60  && percentage < 70)
{
 printf("second division");
 
}
else if (percentage >= 45  && percentage < 60)
{
 printf("third division");
 
}

else{
 printf("Fail");
}

return 0;




}