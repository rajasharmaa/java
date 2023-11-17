/*WAP to check candidate is eligible for casting vote or not.*/
#include<stdio.h>
int main()
{
    int n;

    printf("Enter Your Age:");
    scanf("%d",&n);
    
    if(n>=18)
    {
        printf("***Eligible for voting***");
    }
    else
    {
        printf("***Not Eligible For Votong***");
    }
}