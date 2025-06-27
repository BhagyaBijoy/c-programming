#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number to check whether odd or even:");
    scanf("%d", &num);

    // Using if-else   
    // if(num%2==0)
    // {
    //     printf("%d is even", num);
    // }
    // else{
    //      printf("%d is odd", num);
    // }

    // Using Ternary Operator
    num%2==0?printf("%d is even", num):printf("%d is odd", num);
    return 0;
}