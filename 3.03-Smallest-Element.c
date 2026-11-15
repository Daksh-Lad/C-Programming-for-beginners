/*
Question:
Write a C program to find the smallest element in an array.
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

    int num[len], smallest;

    for(i = 0; i < len; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num[i]);

        // Initialize from the first element so negative values work too.
        if(i == 0 || num[i] < smallest)
            smallest = num[i];
    }

    printf("Smallest = %d\n", smallest);
    return 0;
}
