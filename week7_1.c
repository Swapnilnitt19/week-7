#include<stdio.h>
float average(int *p,int n)
{   int i;
	float sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
	
	return (float)sum/n;
}
 int main()
 {  int i,n;
   printf("enter the number of elements in the given array");
 	scanf("%d",&n);
 	int a[n];
 	printf("enter the elements of the array\n");
 	for(i=0;i<n;i++) 
  scanf("%d",&a[i]);
	float avg= average(a,n);
	printf("average:%f",avg);
	return 0;
  }
