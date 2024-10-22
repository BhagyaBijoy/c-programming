#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter number1:");
    scanf("%d", &num1);
    printf("Enter number2:");
    scanf("%d", &num2);
    printf("Numbers before swapping: number1=%d number2=%d", num1,num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\nNumbers after swapping: number1=%d number2=%d", num1,num2);
    return 0;
}