//  Find the value of S where s = ut + 1 / 2at^2

#include <stdio.h>
int main()
{
    float s, u, t, a;
    printf("Enter The Values Of u,t,a: ");
    scanf("%f%f%f", &u, &t, &a);
    printf("Value Of S Is: %.2f", (u * t) + (a * t * t * 0.5));
    return 0;
}