//C program to Calculate the Sum of the Array Elements suing Pointer.
#include <stdio.h>
#include <conio.h>

int main()
{
    int i, a[10], *j, sum = 0;
    printf("Type 10 number: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);

    }
    j = a;
        //scanf("%d", &a[i]);
    for (i = 0; i < 10; i++)
    {
        sum = sum + *j;
        j++;
    }
    printf("The sum of the array is: %d", sum);
}
