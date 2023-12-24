/*
Calculate the gross salary of an employee by giving basic salary. DA is 60% of basic salary and
HRA is 15% of basic salary. Gross salary is sum of basic salary, DA and HRA.
*/

#include <stdio.h>
int main()
{
    float bas_sal, gross_sal, da, hra;
    printf("Enter Your Basic Salary: ");
    scanf("%f", &bas_sal);
    da = bas_sal * 0.6;
    hra = bas_sal * 0.15;
    printf("Gross Salary: %f", bas_sal + da + hra);
    return 0;
}