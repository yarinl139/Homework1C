#include "NumClass.h"

int isArmstrong(int num) 
{
   int temp = num;
   int sum = 0;
   int t = 0;
   int count = 0;
   int i = 0;
   int temp2 = 1;
   while(temp > 0)
   {
    count++;
    temp = temp / 10;
   }
   temp = num;
   while(temp > 0)
   {
    temp2 = 1;
    t = temp % 10;
    i = 0;
    while(i < count)
    {
        temp2 = temp2 * t;
        i++;
    }
    sum += temp2;
    temp = temp / 10;
   }
   if(sum == num)
   return 1;
   return 0;
}
int isPalindrome(int num)
{
    if(num < 0)
    return 0;
    int temp = num;
    int count = 1;
    int sum = 0;
    while(temp > 9)
    {

        count = count * 10;
        temp = temp / 10;
    }
    temp = num;
    while(temp > 0)
    {
        sum += (temp % 10) * count;
        count = count / 10;
        temp = temp / 10;
    }
    if(sum == num)
    return 1;
    return 0;
}