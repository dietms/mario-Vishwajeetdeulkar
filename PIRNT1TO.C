#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter starting point\n");
scanf("%d",&a);
b=100+a;
while(a<b)
{
if(a%3 && a%5)
printf("%d\t",a);
else if(!(a%15) )
printf("%d-FizzBuzz\t",a);
else if(a%5)
printf("%d-Fizz\t",a);
else
printf("%d-Buzz\t",a);
++a;
}
getch();
}