// Input principal, time and rate-of-interest and calculate the simple interest and compound interest

#include <stdio.h>
#include <math.h>
int main()
{
    float principal, time, roi, si, ci;
    printf("Enter The Principal Amount, Time In Years, Rate Of Interest: \n");
    scanf("%f%f%f", &principal, &time, &roi);
    si = (principal * time * roi) / 100;
    ci = (principal * pow((1 + roi / 100), time)) - principal;
    printf("Simple Interest: %.2f\nCompound Interest: %.2f", si, ci);
    return 0;
}