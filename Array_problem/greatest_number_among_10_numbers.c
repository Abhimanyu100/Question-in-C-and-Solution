/*PROGRAM TO FINDING GREATEST NUMBER AMONG 10 NUMBERS IN AN ARRAY */
#include <stdio.h>

int main()
{
    int i, a[10], max;
    printf("Type ten numbers: ");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d\n", &a[i]);
    }
    max = a[0];
    for (i = 1; i <= 9; i++)
    {
        if (max < a[i])
            max = a[i];
       // printf("Maximum value in the array is: %d", max);
    }
   printf("Maximum value in the array is: %d", max);
}
