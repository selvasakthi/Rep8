#include<stdio.h>
#include<conio.h>
void main()
{
int a;
char ch[30],r;
printf("enter a string");
scanf("%s",&ch);
strcpy(r,ch);
strrev(ch);
if(strcmp(r,ch)==0)
{
printf("the given string is a palindrome");
}
else
{
printf("the given string is not a palindrome");
}
}
