#include <stdio.h>
int main()
{
float a,b,sum,c;
printf("Enter any Two Numbers \n: ");
scanf("%f%f",&a,&b);
sum = a + b;
printf("\n The sum of two numbers is %f and %f is %f \n",a,b,sum);
c = b - a; 
printf("\n The substraction of two numbers is %f and %f is %f \n",a,b,c);
c = b * a;
printf("\n The multiplication of two numbers is %f and %f is %f \n",a,b,c);
c = a / b;
printf("\n The division of two numbers is %f and %f is %f \n",a,b,c);
c = a / b * 100;
printf("\n The percentage of two numbers is %f and %f is %f % \n",a,b,c);
return(0);
}
