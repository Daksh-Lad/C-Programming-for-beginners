/*
Question:
Write a C program to calculate the area of a circle.
*/
#include <stdio.h>

int main()
{
    float radius;
    const float PI = 3.14159f;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area = %.2f\n", PI * radius * radius);
    return 0;
}
