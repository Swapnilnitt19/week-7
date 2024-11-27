#include<stdio.h>
int main()
{
    int n,t;
    printf("enter the number of element");
    scanf("%d",&n);
    int *a=(int*)(malloc(n*sizeof(int)));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
          if(a[j]>a[j+1])
          {
            t=a[j];
            a[j]=a[j+1];
            a[j]=t;
          }
        }
    }
    printf("%d",a[n-1]);
    free(a);
    return 0;
}