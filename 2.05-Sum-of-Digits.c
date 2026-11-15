/*
Question:
Write a C program to find the sum of the digits of an integer.
*/
#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
        num = -num;

    while(num != 0)
    {
        sum += num % 10; // Extract and add the last digit
        num /= 10;      // Remove the last digit
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
