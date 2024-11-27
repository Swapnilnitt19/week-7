/*Write a C program to print string in reverse using pointers.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    printf("enter the string\n");
    fgets(ch,100,stdin);
    ch[strcspn(ch, "\n")] = '\0';
    int l=strlen(ch);
    char *ptr=ch;
   char *ptr2=ch+l-1;
   char temp;
 while(ptr2>ptr)
 {
     temp = *ptr;
    *ptr = *ptr2;
    *ptr2 = temp;
    ptr++;
    ptr2--;
 }
 printf("new string:%s",ch);
 return 0;
}