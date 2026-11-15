/*
Question:
Write a C program to search for an element in an array and print
its index if found.
*/
#include <stdio.h>

int main()
{
    int len, i, search, found = 0;

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

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(i = 0; i < len; i++)
    {
        if(num[i] == search)
        {
            printf("Element found at index %d.\n", i);
            found = 1;
            break; // Stop after the first matching occurrence
        }
    }

    if(found == 0)
        printf("Element not found.\n");

    return 0;
}
