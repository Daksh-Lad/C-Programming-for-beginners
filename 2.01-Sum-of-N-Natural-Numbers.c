/*
Question:
Write a C program to find the sum of the first N natural numbers.
*/
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        sum += i;

    printf("Sum = %d\n", sum);
    return 0;
}
