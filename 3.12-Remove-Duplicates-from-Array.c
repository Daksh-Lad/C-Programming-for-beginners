
/*
Question:
Write a C program to remove duplicate elements from an array
without using another array.
*/

#include <stdio.h>

int main()
{
    int len, i, j, k;

    printf("Enter length of array: ");
    scanf("%d", &len);

    int num[len];

    // Input array elements
    for(i = 0; i < len; i++)
    {
        printf("Enter value of position %d in array: ", i);
        scanf("%d", &num[i]);
    }

    // Check for duplicate elements and remove them
    for(i = 0; i < len; i++)
    {
        for(j = i + 1; j < len; j++)
        {
            if(num[j] == num[i])
            {
                // Shift elements left to overwrite the duplicate
                for(k = j; k < len - 1; k++)
                    num[k] = num[k + 1];

                // Reduce effective array length
                len--;

                // Recheck the current position for another duplicate
                j--;
            }
        }
    }

    // Display array after removing duplicates
    printf("\nArray after removing duplicates:\n");

    for(i = 0; i < len; i++)
        printf("%d ", num[i]);

    return 0;
}
