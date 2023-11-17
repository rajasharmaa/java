/*WAP to calculate percentage of student and print grade on the basis of percentage.*/
#include <stdio.h>
#include<conio.h>
void main()
{
    float sub1, sub2, sub3, sub4, sub5, per, sum;
     clrscr();
    printf("Enter subject1 Number:");
    scanf("%f", &sub1);

    printf("Enter subject2 Number:");
    scanf("%f", &sub2);

    printf("Enter Subject3 Number:");
    scanf("%f", &sub3);

    printf("Enter subject4 Number:");
    scanf("%f", &sub4);

    printf("Enter Subject5 Number:");
    scanf("%f", &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    per = sum / 5;
    printf("**** Grand Total:%f ****\n", sum);
    printf("**** percentage:%f ****\n", per);
    if (per >= 90)
    {
        printf("****Grade A+ ****");
    }
    else if (per >= 80)
    {
        printf("****Grade A ****");
    }
    else if (per >= 70)
    {
        printf("****Grade B ****");
    }
    else if (per >= 60)
    {
        printf("****Grade C ****");
    }
    else if (per >= 45)
    {
        printf("****Grade D ****");
    }
    else if (per >= 33)
    {
        printf("****Grade E ****");
    }
    else
    {
        printf("****Fail****");
    }
    getch();
}