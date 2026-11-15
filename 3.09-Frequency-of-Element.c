/*
Question:
Write a C program to count how many times a given number appears
in an array.
*/
#include <stdio.h>

int main()
{
    int len, i, search, count = 0;

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

    printf("Enter number to count: ");
    scanf("%d", &search);

    for(i = 0; i < len; i++)
    {
        if(num[i] == search)
            count++;
    }

    printf("%d appears %d time(s).\n", search, count);
    return 0;
}
