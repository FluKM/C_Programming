#include <stdio.h>
#include <string.h>
int main ()
{
	char color1[10],color2[10];
	printf("\nThere are only 3 Primary Colors:\n");
	printf("Red,Blue,Yellow\n");
	printf("Enter Colors:");
	scanf("%s%s",color1,color2);
	if((strcmp(color1,"red")==0)&&(strcmp(color2,"blue")==0))
	{
	printf("The Combination is Purple.\n");
	}
	else if ((strcmp(color1,"blue")==0)&&(strcmp(color2,"red")==0))
	{
	printf("The Combination is Purple.\n");
	}
	if((strcmp(color1,"red")==0)&&(strcmp(color2,"yellow")==0))
	{
	printf("The Combination is Orange.\n");
	}
	else if ((strcmp(color1,"yellow")==0)&&(strcmp(color2,"red")==0))
	{
	printf("The Combination is Orange.\n");
	}
	if((strcmp(color1,"yellow")==0)&&(strcmp(color2,"blue")==0))
	{
	printf("The Combination is Green.\n");
	}
	else if ((strcmp(color1,"blue")==0)&&(strcmp(color2,"yellow")==0))
	{
	printf("The Combination is Green.\n");
	}
	else
	{
	printf("Enter valid Primary colors.\n");
	}
	return (0);
}
