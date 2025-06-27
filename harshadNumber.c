#include<stdio.h>
int individualDigitSumOfNumber(int num){
    int temp,sum=0;
    temp=num;
    if(temp!=0){
        sum=sum+temp%10;
        temp/=10;
    }
    return sum;

}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if(num % (individualDigitSumOfNumber(num))==0){
        printf("The number is harshad.");
    }
    else{
        printf("The number is not harshad.");
    }
}