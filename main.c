#include <stdio.h>

int main(void)
{
    int num;

    printf("input a integer :");
    scanf("%i", &num);

    if (num >= 0)
        printf("Absolute value is %d.\n", num);

    else
        printf("Absolute value is %d.\n", -num);

    return 0;
}