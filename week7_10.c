/*Write a C program to find the Greatest Common Divisor (GCD) of two numbers using recursion.*/
#include<stdio.h>
int gcd(int,int,int);
int main()
{ int a,b,n;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    if(a>b)
    n=a;
    else
    n=b;
 printf("the gcd of %d and %d is %d",a,b,gcd(a,b,n));

}int gcd(int a,int b,int n)
{
 if(a%n==0&&b%n==0)
 return n;
 else
 {n--;
 return gcd(a,b,n);
 }
}
