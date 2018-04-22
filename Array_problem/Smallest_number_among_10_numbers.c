/*PROGRAM FOR FINDING SMALLEST NUMBER AMONG 10 NUMBERS IN AN ARRAY*/

#include <stdio.h>

int main()
{
    int i, a[10], min;
    printf("Type your number: ");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 9; i++)
    {
        printf("You typed %d number as %d\n", i, a[i]);
    }
    min = a[0];
    for (i = 1; i <= 9; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    printf("Smallest value is: %d", min);
}
