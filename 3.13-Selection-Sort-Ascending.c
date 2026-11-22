
/*
Question:
Write a C program to sort an array in ascending order using Selection Sort.
*/

#include <stdio.h>

int main()
{
    int len, i, j, smallest, count, temp;

    printf("Enter length of array: ");
    scanf("%d", &len);

    int num[len];

    // Input array elements
    for(i = 0; i < len; i++)
    {
        printf("Enter element in position %d: ", i);
        scanf("%d", &num[i]);
    }

    // Selection Sort in ascending order
    for(i = 0; i < len - 1; i++)
    {
        // Assume the current element is the smallest
        smallest = num[i];
        count = i;

        // Find the smallest element in the remaining array
        for(j = i + 1; j < len; j++)
        {
            if(smallest > num[j])
            {
                smallest = num[j];
                count = j;
            }
        }

        // Swap the smallest element with the current element
        temp = num[i];
        num[i] = smallest;
        num[count] = temp;
    }

    // Display sorted array
    printf("\nArray in ascending order:\n");

    for(i = 0; i < len; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
