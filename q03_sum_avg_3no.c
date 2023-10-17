// Compute Sum And Average Of Three Numbers...

#include <stdio.h>
int main()
{
    int num1, num2, num3, sum;
    float avg;
    printf("Please Enter First Numbers:\n");
    scanf("%d", &num1);
    printf("Please Enter Second Numbers:\n");
    scanf("%d", &num2);
    printf("Please Enter Third Numbers:\n");
    scanf("%d", &num3);
    sum = num1 + num2 + num3;
    avg = sum / 3;
    printf("Sum Is:%d\nAverage Is:%f", sum, avg);
    return 0;
}
