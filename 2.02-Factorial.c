/*
Question:
Write a C program to find the factorial of an entered non-negative integer.
*/
#include <stdio.h>

int main()
{
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Factorial is not defined for negative integers.\n");
        return 0;
    }

    for(i = 1; i <= num; i++)
        factorial *= i;

    printf("Factorial = %llu\n", factorial);
    return 0;
}
