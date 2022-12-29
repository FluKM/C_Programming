#include <stdio.h>
int main ()
{
int r,i,j,k;
printf("\nEnter the rows:");
scanf("%d",&r);
for (i=2;i<=r;i++)
{
for (j=1;j<=10;j++)
{
k=i*j;
printf("%d ",k);
}
printf("\n\n");
}
return(0);
}
