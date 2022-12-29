#include <stdio.h>
int main()
{
int sec, hrs, min, day;
	printf("\n Enter Time(ONLY IN SECONDS): \n");
	scanf("%d",&sec);
	if 
	(sec < 60)
		{
		printf("The time in sec:- %dsec\n", sec);
		}
	if
	(sec >= 60 && sec < 3600)
		{
		min = sec / 60;
		sec = sec % 60;
		printf("The time in minutes and seconds:- %dmin:%dsec\n",min,sec);
		}
	if
	(sec >= 3600 && sec < 86400)
		{
		hrs = sec / 3600;
		min = (sec % 3600)/60;
		sec = ((sec % 3600)%60);
		printf("The time in Hours, Minutes and Seconds:- %dhrs:%dmin:%dsec\n",hrs,min,sec);
		}
	if
	(sec >= 86400)
		{
		day = sec / 86400;
		hrs = (sec % 86400)/3600;
		min = ((sec % 86400)%3600)/60;
		sec = ((sec % 86400)%3600)%60;
		printf("\nThe time is:- %dday:%dhrs:%dmin:%dsec\n",day,hrs,min,sec);
		}
	return(0);
}
