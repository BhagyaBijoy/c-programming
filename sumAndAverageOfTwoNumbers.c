#include<stdio.h>
int main(){
    int num1,num2,sum=0;
    float avg;
    //Reading numbers from the suer
    printf("Enter two numbers:");
    scanf("%d", &num1);
    scanf("%d", &num2);
    //adding two numbers and store into sum
    sum=num1+num2;
    //find the average of two numbers and store into avg
    avg=sum/2.0;
    //Display sum and avg 
    printf("Sum of two numbers: %d\n", sum);
    printf("Average of two numbers: %f", avg);
    return 0;
}