#include <stdio.h>

int main()
{
    int i, a[10], sumodd = 0, sumeven = 0;
    printf("Enter 10 number: ");
    for ( i = 0; i <= 9; i++)
    scanf("%d ", &a[i]);
    for (i = 0; i <= 9; i++)
    {
        if(a[i] % 2 == 0)
            sumeven = sumeven + a[i];
        else
            sumodd = sumodd + a[i];
    }
    printf("Sum of even = %d\n", sumeven);
    printf("Sum of odd = %d\n", sumodd);
}
