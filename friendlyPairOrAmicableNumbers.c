#include<stdio.h>
int getDivisorSum(int n){
    int sum=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            sum+=i;
            if(i!=n/i){
                sum+=n/i;
            }
        }
    }
    return sum;
}
int main(){
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);

    if ((float)getDivisorSum(num1)/num1 == (float)getDivisorSum(num2)/num2){
        printf("The numbers are friendly pair.");
    }
    else{
        printf("The numbers are not friendly pair.");
    }
    return 0;

}