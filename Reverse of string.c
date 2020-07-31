#include<stdio.h>
void main()
{
char str[40];
int len,i=0;
printf("enter a string ");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
len++;
}
printf("the reverse of a string ");
for(i=len-1;i>=0;i--)
{
printf("%c",str[i]);
}
printf("\n");
}
