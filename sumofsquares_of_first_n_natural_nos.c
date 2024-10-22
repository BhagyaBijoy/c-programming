#include<stdio.h>
#include<conio.h>
int main()
{
    int n,squaresum=0,i;
    printf("enter n:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        squaresum=squaresum+(i*i);
    }
    printf("Sum of squares of first n natural numbers: %d", squaresum);
    return 0; 
}
