/*
Question:
Write a C program to reverse the digits of an integer.
*/
#include <stdio.h>

int main()
{
    int num, test, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    test = num;

    while(test != 0)
    {
        reverse = reverse * 10 + test % 10;
        test /= 10;
    }

    printf("Reversed number = %d\n", reverse);
    return 0;
}
