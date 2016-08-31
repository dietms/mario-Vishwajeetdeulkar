#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,space,spacecount,rows;
char ch;
clrscr();
ch='#';
printf("Enter number of rows  ");
scanf("%d",&rows);
space=rows-1;
for(i=1;i<=rows;i++)
{
 for(spacecount=space;spacecount>=1;spacecount--)
 printf(" ");
 for(j=1;j<=i+1;j++)
 printf("%c",ch);
 printf("\n");
 space--;
}
 getch();
}