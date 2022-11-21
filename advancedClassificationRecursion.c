#include "NumClass.h"
#include "stdio.h"
int Calculate(int,int);
int countdigits(int);
int power(int,int);
int reversed(int);

int isPalindrome(int num)
{
    int result = reversed(num);
    if(num == result)
    {
    	return 1;
    }
    return 0;
}
int reversed(int num)
{
     if (num/10==0)
     {
     return num;
     }
     return (num%10)*power(10,countdigits(num)-1) + reversed(num/10);
}
int countdigits(int num)
{
    int counter = 0;
    int temp = num;
    while (temp!=0)
    {
        temp = temp /10;
        counter++;
    }
    return counter;
}
int power(int num,int count)
{
    int sum = 1;
    for (int i = 0; i < count; i++)
    {
        sum*=num;
    }
    return sum;

}
int isArmstrong(int num)
{
    int digits = countdigits(num);
    int result = Calculate(num,digits);
    if (result == num)
    {
        return 1;
    }
    return 0;
}
int Calculate(int num,int digits) //recursive function for 
{
   if(num==0)
   {
    return 0;
   }
   return power(num%10,digits) + Calculate(num/10,digits);
} 
