//Description: .Write a C program to find sum of all natural numbers between 1 to n using recursion.

#include<stdio.h>
int findSum(int);
int main()
{
   int i, num;
   int result;
 
   printf("Input a number : ");
   scanf("%d", &num);
 
   result = findSum(num);
   printf("\nSum of Number From 1 to %d : %d", num, result);
 
   return (0);
}
int findSum(int num)
{
   int res;
   if (num == 1)
   {
      return (1);
   } 
    else
    {
      res = num + findSum(num - 1);
   }
   return (res);
}
