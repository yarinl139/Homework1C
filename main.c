#include "stdio.h"
#include "NumClass.h"
int main()
{
    int x,y;

    scanf("%d %d",&x , &y);
    
    printf("The Armstrong numbers are:");
    for(int i=x;i<=y;i++)
    {
        if (isArmstrong(i))
        {
        printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    for(int i=x;i<=y;i++)
    {
        if (isPalindrome(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Prime numbers are:");
    for(int i=x;i<=y;i++)
    {
        if (isPrime(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Strong numbers are:");
    for(int i=x;i<=y;i++)
    {
        if (isStrong(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}
