// Input radius of a circle and find its area and circumference.

#include <stdio.h>
int main()
{
    float rad;
    printf("Please Enter The Radius Of The Circle: ");
    scanf("%f", &rad);
    printf("Area Of Circle Is: %.2f\nCircumference Of The Circle: %.2f", 3.14 * rad * rad, 2 * 3.14 * rad);
    return 0;
}