/*
Question:
Write a C program to count how many prime numbers exist between 1 and 100.
*/
#include <stdio.h>

int main()
{
    int i, j, count, primeCount = 0;

    for(j = 2; j <= 100; j++)
    {
        count = 0; // Reset divisor count for each candidate number

        for(i = 1; i <= j; i++)
        {
            if(j % i == 0)
                count++;
        }

        if(count == 2)
            primeCount++;
    }

    printf("Number of primes between 1 and 100 = %d\n", primeCount);
    return 0;
}
