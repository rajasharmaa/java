/*WAP to perform arithmetic operations using switch case. (choice is
character data type).*/
#include <stdio.h>
#include <conio.h>
int main()
{
    float ans, a, b;
    int c, d;
    char ch;

    printf("****Press A For Addition****\n");
    printf("****Press B For Substraction****\n");
    printf("****Press C For Multiplication****\n");
    printf("****Press D For Division****\n");
    printf("****Press E For Modules****\n");

    scanf("%c", &ch);

    switch (ch)
    {
    case 'A':
        printf("Enter A And B:");
        scanf("%f%f", &a, &b);
        ans = a + b;
        printf("Result:%f", ans);
        break;

    case 'B':
        printf("Enter A And B:");
        scanf("%f%f", &a, &b);
        ans = a - b;
        printf("Result:%f", ans);
        break;

    case 'C':
        printf("Enter A And B:");
        scanf("%f%f", &a, &b);
        ans = a * b;
        printf("Result:%f", ans);
        break;

    case 'D':
        printf("Enter A And B:");
        scanf("%f%f", &a, &b);
        ans = a / b;
        printf("Result:%f", ans);
        break;

    case 'E':
        printf("Enter A And B:");
        scanf("%f%f", &a, &b);
        ans = c % d;
        printf("Result:%f", ans);
        break;

   
    default:
        printf("Wrong Choice");
        break;
    }
}