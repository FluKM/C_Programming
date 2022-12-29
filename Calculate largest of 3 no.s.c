#include <stdio.h>
int main ()
{
int a,b,c;
printf("\nEnter Numbers(3):\n");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
if (a>c)
{
printf("%d is the Largest Number.\n",a);
}
if (b>c)
if (b>a)
{
printf("%d is the Largest Number.\n",b);
}
if (c>a)
if (c>b)
{
printf("%d is the Largest Number.\n",c);
}
return(0);
}
