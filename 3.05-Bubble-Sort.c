/*
Question:
Write a C program to sort an array in ascending order using
optimized Bubble Sort.
*/
#include <stdio.h>

int main()
{
    int len, i, j, temp, swapped;

    printf("Enter array length: ");
    scanf("%d", &len);

    if(len <= 0)
    {
        printf("Array length must be positive.\n");
        return 0;
    }

    int num[len];

    for(i = 0; i < len; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for(i = 0; i < len - 1; i++)
    {
        swapped = 0; // Reset at the start of each complete pass

        // The last i elements are already in their final positions.
        for(j = 0; j < len - 1 - i; j++)
        {
            if(num[j] > num[j + 1])
            {
                // Exchange neighbouring values that are out of order.
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;

                swapped = 1; // Remember that this pass changed the array
            }
        }

        // If no swap happened in a full pass, the array is sorted.
        if(swapped == 0)
            break;
    }

    printf("Sorted array: ");
    for(i = 0; i < len; i++)
        printf("%d ", num[i]);

    printf("\n");
    return 0;
}
