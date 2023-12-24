// Find the value of V where v^2 = u^2 -2as

#include <stdio.h>
#include <math.h>
int main()
{
    float s, u, a;
    printf("Enter The Values Of s, u, a: ");
    scanf("%f%f%f", &s, &u, &a);
    printf("Value Of V Is: %.2f", sqrt((u * u) - (2 * a * s)));
    return 0;
}