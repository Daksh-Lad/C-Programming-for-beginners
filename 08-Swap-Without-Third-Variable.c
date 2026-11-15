/*
Question:
Write a C program to swap two numbers without using a third variable.
*/
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Addition and subtraction exchange the values without a temp variable.
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
