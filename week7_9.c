/*Write a C program to implement structure inside a structure. */
#include<stdio.H>
struct student
{
    char name[20];
    int roolno;
    struct marks{
    int marks;}s1[5]
}s;
int main()
{  int avg=0;
    printf("enter the name\n");
    scanf("%[^\n]s",s.name);
    printf("enter the rool.no");
    scanf("%d",&s.roolno);
    printf("enter the marks");
    for(int i=0;i<5;i++)
    scanf("%d",&s.s1[i].marks);

    for(int i=0;i<5;i++)
    avg=avg+s.s1[i].marks;
   float n=(float)avg/5;
    printf("avarage marks%f",n);
    return 0;
}