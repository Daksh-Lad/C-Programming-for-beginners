/*
Question:
Write a C program to find the largest of three numbers.
*/
#include <stdio.h>

int main()
{
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a; // Start by assuming the first number is largest

    if(b > largest)
        largest = b;

    if(c > largest)
        largest = c;

    printf("Largest = %d\n", largest);
    return 0;
}
