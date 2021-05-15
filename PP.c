#include<stdio.h>
int main()
{
	int qty,rate,total;
	char ch;
	do
	{
		printf("Enter the qty and rate\n");
		scanf("%d %d",&qty,&rate);
		total= qty * rate;
		printf("Total is %d\n",total);
		printf("DO you want to continue\n");
		scanf("%c",&ch);
		ch=getch();
	}
	while (ch=='y' || ch== 'y');
}
	   
