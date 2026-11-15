/*
Question:
Write a C program to reverse an array using a second array.
*/
#include <stdio.h>

int main()
{
    int len, i;

    printf("Enter array length: ");
    scanf("%d", &len);

    if(len <= 0)
    {
        printf("Array length must be positive.\n");
        return 0;
    }

    int num[len], reverse[len];

    for(i = 0; i < len; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    // Read the original array backwards into the new array.
    for(i = len - 1; i >= 0; i--)
        reverse[len - 1 - i] = num[i];

    printf("Reversed array: ");
    for(i = 0; i < len; i++)
        printf("%d ", reverse[i]);

    printf("\n");
    return 0;
}
