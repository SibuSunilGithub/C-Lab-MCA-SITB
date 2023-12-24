// Reads two values from the keyboard, swaps their values and prints out the result.

#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter First No: ");
    scanf("%d", &a);
    printf("Enter Second No: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swap\nFirst No: %d\nSecond No: %d", a, b);
    return 0;
}
