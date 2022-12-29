#include <stdio.h>
struct engine
{
	char serial[3];
	int quantity;
	int yom;
	char mat[40];
}parts[10];

int main()
{
	int n,i;
	printf("Enter no. of engine parts:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
		{
			printf("Serial no.: Quantity: Year of manufacture: materials:");
			scanf("%s%d%d%s",parts[i].serial,&parts[i].quantity,&parts[i].yom,parts[i].mat);
		}
	for(i=0;i<n;i++)
		{
			if(parts[i].serial[0]=='B' && parts[i].serial[1]=='B')
		{
			printf("\nSerial no. %s",parts[i].serial);
			printf("\nYOM: %d\nMTR: %s\nQNT: %d \n",parts[i].yom,parts[i].mat,parts[i].quantity);
		}
			if(parts[i].serial[0]=='C' && parts[i].serial[1]=='C' && parts[i].serial[2]!='7' &&
			parts[i].serial[2]!='8' && parts[i].serial[2]!='9')
		{
			printf("\nSerial no. %s",parts[i].serial);
			printf("\nYOM: %d\nMTR: %s\nQNT:%d\n",parts[i].yom,parts[i].mat,parts[i].quantity);
		}
		}
}
