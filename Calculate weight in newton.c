// program to calculate given mass in weight 
#include <stdio.h>
int main ()
{
	int m;
	float w,n=9.8;
	printf("\nEnter mass(kg):\n");
	scanf("%d",&m);
	w=m*n;
	if (w<=10)
	{
	printf("The weight in Newton is:%.2f,too light\n",w);
	}
	else if (w>=1000)
	{
	printf("The weight in Newton is:%.2f,too heavy\n",w);
	}
	else
	{ 
	printf("The weight in Newton is:%.2f\n",w);
	}
	return(0);
}
