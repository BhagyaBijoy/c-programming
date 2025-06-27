#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    // Brute-Force Mwthod

    // if(num>0){
    //     printf("The number is positive");
    // }
    // else if(num<0){
    //     printf("The number is negative");
    // }
    // else{
    //     printf("The number is zero");
    // }

    // Using Nested if 


    // if(num>=0){
    //     if(num>0){
    //         printf("The number is positive");
    //     }
    //     else{
    //         printf("The number is zero");
    //     }
    // }
    // else{
    //     printf("The number is negative");
    // }

    // Using Ternary Operator

    if(num>=0){
        num>0 ? printf("The number is positive"):printf("The number is zero");
    }
    else{
        printf("The number is negative");
    }
    return 0;
}