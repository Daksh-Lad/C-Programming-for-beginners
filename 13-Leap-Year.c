/*
Question:
Write a C program to check whether a year is a leap year.
*/
#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Century years are leap years only when divisible by 400.
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}
