//Program(16) -> Write a program to generate a multipliaction table of ny number using WHILE, DO-WHILE and FOR loop//
#include <stdio.h>

int main()
{
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n Multiplication Table of %d\n", num);

    do
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    while (i <= 10);

    return 0;
}
