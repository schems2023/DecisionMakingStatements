#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, root1, root2, discriminant;

    printf("enter a co-efficent of x^2 : \t");
    scanf("%f", &a);

    printf("enter a co-efficent of x : \t");
    scanf("%f", &b);

    printf("enter a constant  c : \t");
    scanf("%f", &c);

    discriminant = pow(b, 2)-4*a*c;      // b*b - 4*a*c

    root1 = (-b + sqrt(discriminant))/2*a;
    root2 = (-b - sqrt(discriminant))/2*a;

    printf("root1 = %f \n root2 = %f", root1, root2);
}