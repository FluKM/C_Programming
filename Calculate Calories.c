#include <stdio.h>
int main ()
{
int n;
float calb,cpm=3.9;
for (n=10;n<=30;n+=5)
{
calb=cpm*n;
// calb==Calories burned
// cpm==calories burned per minutes
printf("The calories burn are:%.2f\n",calb);
}
return(0);
}
