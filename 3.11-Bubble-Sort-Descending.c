/*
Question:
Write a C program to sort an array in descending order using Bubble Sort.
*/

#include <stdio.h>

int main()
{
    int len, i, j, temp, swapped;

    printf("Enter length of array: ");
    scanf("%d", &len);

    int num[len];

    // Input array elements
    for(i = 0; i < len; i++)
    {
        printf("Enter value of position %d in array: ", i);
        scanf("%d", &num[i]);
    }

    // Sort array in descending order using Bubble Sort
    for(i = 0; i < len; i++)
    {
        swapped = 0;

        for(j = 0; j < len - 1 - i; j++)
        {
            // Swap adjacent elements if the left element is smaller
            if(num[j] < num[j + 1])
            {
                temp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = temp;

                swapped++;
            }
        }

        // Stop if no swaps occurred, meaning the array is sorted
        if(swapped == 0)
            break;
    }

    // Display sorted array
    printf("\nArray in descending order:\n");

    for(i = 0; i < len; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
