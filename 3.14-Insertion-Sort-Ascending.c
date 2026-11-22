
/*
Question:
Write a C program to sort an array in ascending order
using the Insertion Sort algorithm.
*/

#include <stdio.h>

int main()
{
    int len, i, j, temp;

    printf("Enter length of array: ");
    scanf("%d", &len);

    int num[len];

    for(i = 0; i < len; i++)
    {
        printf("\nEnter element in position %d: ", i);
        scanf("%d", &num[i]);
    }

    // Pick each element starting from the second position
    for(i = 1; i < len; i++)
    {
        temp = num[i];
        j = i - 1;

        // Shift elements greater than temp one position to the right
        while(j >= 0 && num[j] > temp)
        {
            num[j + 1] = num[j];
            j--;
        }

        // Insert the picked element into its correct position
        num[j + 1] = temp;
    }

    printf("\nArray in ascending order: ");

    for(i = 0; i < len; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
