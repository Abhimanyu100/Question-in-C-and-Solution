//Program to calculate the SUM of array and its Average.
#include <stdio.h>

int main()
{
    int i, j, a[10], sum = 0, average;
    printf("Type 10 number: ");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 9; i++)
    {
        sum = sum + a[i];
        average = sum / 2;
    }
    printf("Sum of the array is: %d\n", sum);
    printf("Average of array is: %d\n", average);


}
