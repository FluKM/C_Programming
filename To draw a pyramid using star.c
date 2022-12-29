#include <stdio.h>
int main ()
{
	int i,j,r,k=0;
	printf("\nEnter a number to define rows:\n");
	scanf ("%d",&r);
	for (i=1;i<=r;i++) 
	{
		for (j=1;j<=r-i;j++)
			{
			printf("  ");
			}
				for (k=1;k<=(2*i-1);k++)
				{
				printf("* ");
				}
		printf("\n");
	}
	return(0);
}
