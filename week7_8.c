#include<stdio.h>
union data{
  char name[30];
  int roll;
  int marks[5];
}s;
int main()
{ int i,sum=0;
  printf("enter your name: ");
  scanf("%s",&s.name);
  printf("enter your roll no");
  scanf("%d",&s.roll);
  printf("enter your marks");
  for(i=0;i<5;i++)
  {
    scanf("%d",&s.marks[i]);
    sum=sum+s.marks[i];
}
printf("your percentage is %d",sum/5);
return 0;
}
