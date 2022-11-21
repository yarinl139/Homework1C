#include "NumClass.h"

int isPrime(int num)
{
    if(num < 1)
    return 0;
    if(num==1)
    return 1;
    for(int i = 2; i < num; i++)
    {
        if((num % i)== 0)
           return 0;
    }
    return 1;
}
int factorial(int num)
{
    int sum = 1;
    for (int i = 1; i <= num; i++)
    {
       sum*=i;
    }
    return sum;
}
int isStrong(int num)
{
    if(num < 1)
    {
    return 0;
    }
    int sum = 0;
    int temp = num;
    while(temp > 0)
    {
        sum += factorial(temp%10);
        temp = temp / 10;
    }
    if(sum == num)
    {
    return 1;
    }
    return 0;
}