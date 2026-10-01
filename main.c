#include <stdio.h>

int main(void)
{
    int num;

    printf("input a integer :");
    scanf("%i", &num);

    if (num > 0)
        printf("It's positive number.\n");

    else if (num < 0)
        printf("It's negative number.\n");

    else
        printf("It's 0.\n");

    return 0;
}