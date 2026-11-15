/*
Question:
Write a C program to find the largest and second-largest distinct
elements in an array without sorting it.
*/
#include <stdio.h>

int main()
{
    int len, i, largest, secondLargest, foundSecond = 0;

    printf("Enter array length: ");
    scanf("%d", &len);

    if(len < 2)
    {
        printf("Enter at least two elements.\n");
        return 0;
    }

    int num[len];

    for(i = 0; i < len; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    // Initialize largest from the first array element, not zero.
    largest = num[0];

    for(i = 1; i < len; i++)
    {
        if(num[i] > largest)
            largest = num[i];
    }

    // Find the greatest value that is strictly smaller than largest.
    for(i = 0; i < len; i++)
    {
        if(num[i] < largest && (foundSecond == 0 || num[i] > secondLargest))
        {
            secondLargest = num[i];
            foundSecond = 1;
        }
    }

    printf("Largest = %d\n", largest);

    if(foundSecond == 1)
        printf("Second largest distinct element = %d\n", secondLargest);
    else
        printf("No second-largest distinct element exists.\n");

    return 0;
}
