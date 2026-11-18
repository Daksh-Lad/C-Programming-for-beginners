
/*
Question:
Write a C program to reverse a number and calculate
the sum of its individual digits.
*/
#include <stdio.h>

int main()
{
    int num, rev = 0, sum = 0, sign = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the negative sign separately and convert the number to positive
    if(num < 0)
    {
        num = -num;
        sign = -1;
    }

    while(num != 0)
    {
        // Extract the last digit and add it to the reversed number
        rev = (rev * 10) + (num % 10);

        // Add the extracted digit to the sum
        sum += num % 10;

        // Remove the last digit
        num /= 10;
    }

    // Restore the original sign of the number
    rev = rev * sign;

    printf("The reversed number is: %d\n", rev);
    printf("The sum of digits is: %d\n", sum);

    return 0;
}
