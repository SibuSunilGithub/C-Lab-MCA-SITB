// Input three sides of a triangle and compute the area of a triangle.

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter The Three Sides Of The Triangle: ");
    scanf("%f%f%f", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area Of The Triangle Is: %.2f", area);
    return 0;
}