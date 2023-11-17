/*WAP to calculate bill of electricity using if-else ladder. Where unit charge
is as follow:*/

#include<stdio.h>
#include<string.h>
void main()
{
    int unit;
    float total;

    printf("Enter The Units:");
    scanf("%d",&unit);

    if(unit<100)
    {
        total= unit*5;
    }
    else if(unit>=100 && unit<200)
    {
        total = (100*5)+((unit-100)*7);
    }
    else if(unit>=200 && unit<300)
    {
        total = (100*5)+(100*7)+((unit-200)*9);  
    }
    else if(unit>=300)
    {
       total = (100*5)+(100*7)+(100*9)+((unit-300)*11);
    }

    total=total+total*0.1;
    printf("*****Your Total Bill Is: %0.2f*****",total);
}