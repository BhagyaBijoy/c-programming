#include<stdio.h>
#include<math.h>
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
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    if (getDivisorSum(num)>num){
        printf("The number is abundant");
    }
    else{
        printf("The number is not abundant");
    }
    return 0;

}