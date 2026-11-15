/*
Question:
Write a C program to merge two arrays into a third array.
The elements of the first array should come before the elements
of the second array.
*/
#include <stdio.h>

int main()
{
    int len1, len2, i;

    printf("Enter length of first array: ");
    scanf("%d", &len1);

    printf("Enter length of second array: ");
    scanf("%d", &len2);

    if(len1 <= 0 || len2 <= 0)
    {
        printf("Both array lengths must be positive.\n");
        return 0;
    }

    int a[len1], b[len2], merged[len1 + len2];

    printf("Enter first array elements:\n");
    for(i = 0; i < len1; i++)
        scanf("%d", &a[i]);

    printf("Enter second array elements:\n");
    for(i = 0; i < len2; i++)
        scanf("%d", &b[i]);

    // Copy the first array starting at index 0.
    for(i = 0; i < len1; i++)
        merged[i] = a[i];

    // The second array starts at len1, the next free index.
    for(i = 0; i < len2; i++)
        merged[len1 + i] = b[i];

    printf("Merged array: ");
    for(i = 0; i < len1 + len2; i++)
        printf("%d ", merged[i]);

    printf("\n");
    return 0;
}
