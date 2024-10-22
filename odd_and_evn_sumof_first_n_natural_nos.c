#include<stdio.h>
int main()
{
    int n,oddsum=0,evensum=0,i;
    printf("Enter n:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            evensum=evensum+i;
        }
        else{
            oddsum=oddsum+i;
        }
    }
    printf("Even sum of first n natural numbers: %d", evensum);
    printf("\nOdd sum of frist n natural numbers: %d", oddsum);
    return 0;
}