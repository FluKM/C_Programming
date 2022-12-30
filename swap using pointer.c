#include <stdio.h>
float calculateprice(float price,float comm_rate,float dis_rate); //declaration of function
float main()
{
float price,comm_rate,dis_rate;
float mrp=0;
printf("\nEnter the price of the product:\n");
scanf("%f",&price);
printf("Enter the Commision of the salesman:\n");
scanf("%f",&comm_rate);
printf("Enter the discount percentage:\n");
scanf("%f",&dis_rate);
mrp=calculateprice(price,comm_rate,dis_rate);//call the function here
printf("The Discounted amount is:%.2f\n",mrp);
return(0);
} //defination of the function

float calculateprice(float price,float comm_rate,float dis_rate)
{
float final_price,comm_amount,dis_amount;
comm_amount=(comm_rate/100)*price;
dis_amount=(dis_rate/100)*price;
final_price=price+comm_amount-dis_amount;
return final_price;
}
