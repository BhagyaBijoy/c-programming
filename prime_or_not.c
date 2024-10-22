#include<stdio.h>
int isPrime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(i%n==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

}

int main()
{
    int num;
    printf("Enter number:");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
