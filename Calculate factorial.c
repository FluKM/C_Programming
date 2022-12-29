#include <stdio.h>
int main ()
{
int n,b=1;
printf("\nEnter the Number:\n");
scanf("%d",&n);
for (int i=1;i<=n;i++)
{
printf("%d,",i);
b=b*i;
}
printf("\nThe factorial are: %d\n",b);
return(0);
}
