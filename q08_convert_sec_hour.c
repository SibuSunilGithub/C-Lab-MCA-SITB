// Input the time in seconds and convert it to hours and minutes.

#include <stdio.h>
int main()
{
    int sec, hr, min;
    printf("Enter The Second ");
    scanf("%d", &sec);
    hr = sec / 3600;
    min = (sec % 3600) / 60;
    printf("%dHour %dMin", hr, min);
    return 0;
}