/*
Question:
Write a C program to check whether an entered number is prime,
composite, or neither.
*/
#include <stdio.h>

int main()
{
    int num, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Negative numbers are neither prime nor composite.\n");
        return 0;
    }

    if(num <= 1)
    {
        printf("%d is neither prime nor composite.\n", num);
        return 0;
    }

    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
            count++;
    }

    if(count == 2)
        printf("%d is prime.\n", num);
    else
        printf("%d is composite.\n", num);

    return 0;
}
