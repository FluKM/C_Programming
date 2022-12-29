#include <stdio.h>
int main ()
{
	int y,t_rain=0,t_month,i,j,rain;
	float avg_rain;
	printf("\nEnter Number of Years:\n");
	scanf("%d",&y);
		for (i=0;i<y;i++)
			{
			for (j=0;j<12;j++)
				{
				printf("Enter Amount of rainfall (%d):\n",j);
				scanf("%d",&rain);
				t_rain+=rain;
				}
			}
		t_month=12*y;
		avg_rain=t_rain/t_month;
	printf("Total months:%d\n",t_rain);
	printf("Average rainfall:%.2f\n",avg_rain);
	return(0);
}
