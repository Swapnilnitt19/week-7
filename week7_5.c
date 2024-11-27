/*Raj is very good at mathematics and he is working with a series s where the next term is the sum of
previous three terms. Given the first three terms of the series, a, b and c respectively, but here he simply
want to output the nth term of the series using recursion.
The recursive method for calculating the nth term is given below.*/
#include<stdio.h>
int series(int);
int main()
{
    int n;
    printf("enter the nth term:");
    scanf("%d",&n);
    printf("the nth term is:");
    printf("%d",series(n));
}
int series(int n)
{   
    if(n==1)
    return 1;
    if(n==2)
    return 2;
    if(n==3)
    return 3;
    if(n>3);
   return series(n-1)+series(n-2)+series(n-3);
}