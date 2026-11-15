/*
Question:
Write a C program to find the largest element in an array.
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

    int num[len], largest;

    for(i = 0; i < len; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num[i]);

        // Use the first actual element as the initial largest value.
        if(i == 0 || num[i] > largest)
            largest = num[i];
    }

    printf("Largest = %d\n", largest);
    return 0;
}
