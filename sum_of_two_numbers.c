#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;
    printf("Enter number 1:");
    scanf("%d", &num1);
    printf("Enter number1 2:");
    scanf("%d", &num2);
    sum=num1+num2;
    avg=sum/2;
    printf("The sum of %d and %d is %d", num1,num2,sum);
    printf("\nThe average of %d and %d is %f", num1,num2,avg);
    return 0;
}