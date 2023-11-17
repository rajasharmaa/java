/*WAP to check given number is positive, negative or equal to zero.*/

#include <stdio.h>
void main()
{
    int n;

    printf("Enter Number:");
    scanf("%d", &n);

    if (n >= 1)
    {
        printf("Positive=%d", n);
    }
    else if (n==0)
    {
        printf("Zero=%d",n);
    }
    else
    {
        printf("Negative=%d",n);
    }
}