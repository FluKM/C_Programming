#include <stdio.h>
int main()
{
int a,b,c,o;
float d;
printf("\nEnter the numbers:\n");
scanf("%d%d",&a,&b);
printf("Enter the operation:\n");
printf("1 for addition\n2 for substraction\n3 for multiplication\n4 for division\n5 for remainder\n6 for percentage\n");
scanf("%d",&o);
switch(o)
{
case 1 :
c = a + b;
printf("The Addition of numbers is:%d\n",c);
break;
case 2:
c=b-a;
printf("The Substraction of numbers is:%d\n",c);
break;
case 3:
c=a*b;
printf("The Multiplication of numbers is:%d\n",c);
break;
case 4:
d=b/a;
printf("The Division of numbers is:%.1f\n",d);
break;
case 5:
d=a%b;
printf("The Remainder of numbers is:%.1f\n",d);
break;
case 6:
d=b/a*100;
printf("The Percentage of numbers is:%.2f\n",d);
break;
}
return(0);
}
	
