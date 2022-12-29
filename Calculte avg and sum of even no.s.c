//program to find average and sum of even numbers from 1 to n that user has entered
#include <stdio.h>
int main ()
{
	int j,n,sum=0;
	float avg,a;
	printf("\nEnter Number till u want to find even numbers:\n");
	scanf("%d",&n);
	printf("EVEN NUMBERS ARE:\n");
	for
	(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		a++; // a is declared as counter for counting the even numbers
		printf("%d\n",i);
		sum = sum+i;
		}
		avg=sum/a;	
	}
	printf("total Number of even numbers are:%.2f\n",a);
	printf("sum of even numbers are:%d\n",sum);
	printf("average of even numbers are:%.2f\n",avg);
	return(0);
}
