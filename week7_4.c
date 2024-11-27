#include<stdio.h>

int main()
{  int k=0,n,n1;
    printf("enter the number of elements\n");
    scanf("%d",&n);
   int *a=(int*)calloc(n,sizeof(int));
   printf("enter the array 1");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
     printf("enter the number of elements\n");
    scanf("%d",&n1);
 int *b=(int*)calloc(n1,sizeof(int));
    printf("enter the array 2");
    for(int i=0;i<n1;i++)
    scanf("%d",&b[i]);
 a=(int*)realloc(a,(n+n1));
    for(int i=0;i<n1;i++)
    a[n+i]=b[i];
   for(int i=0;i<n+n1;i++)
    printf("%d",a[i]);
    return 0;
}
