#include<stdio.h>
int main(){
    int var1,var2;
    //reading variable 1 from the user.
    printf("Enter variable 1:");
    scanf("%d", &var1);
    //reading variable 2 from the user.
    printf("Enter variable 2:");
    scanf("%d", &var2);
    //print variables before swapping
    printf("Variables before swapping: var1=%d var2=%d\n", var1,var2);
    /**
     * swap the variables
     */
    var1=var1+var2;
    var2=var1-var2;
    var1=var1-var2;
    /**
     * print variables after swapping
     */
    printf("Variables after swapping: var1=%d var2=%d", var1,var2);
    return 0;
}