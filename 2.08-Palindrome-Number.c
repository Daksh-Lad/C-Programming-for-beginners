/*
Question:
Write a C program to check whether an integer is a palindrome.
This version treats a negative number by checking its absolute digits.
*/
#include <stdio.h>

int main()
{
    int num, test, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
        num = -num;

    test = num; // Keep the original value for the final comparison

    while(test != 0)
    {
        reverse = reverse * 10 + test % 10;
        test /= 10;
    }

    if(num == reverse)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}
