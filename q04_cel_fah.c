// Wap to convert celsius to fahrenheit value given by user...

#include <stdio.h>
int main()
{
    float celsius, far;
    printf("Enter the celsius value.\n");
    scanf("%f", &celsius);
    far = (celsius * 9 / 5) + 32;
    printf("The value of the celsius temperature in fahrenheit is %.2f\n", far);
    return 0;
}