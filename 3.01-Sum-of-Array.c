/*
Question:
Write a C program to input array elements and calculate their sum.
*/
#include <stdio.h>

int main()
{
    int len, i, sum = 0;

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
        sum += num[i]; // Add each element as it is entered
    }

    printf("Sum = %d\n", sum);
    return 0;
}
