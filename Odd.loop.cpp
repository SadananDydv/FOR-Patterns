#include<stdio.h>
int main()
{
	int qty,rate,total;
	char ch;
  do
  {
  	printf("Enter the quantity and rate\n");
  	scanf("%d %d",&qty,&rate);
  	total=qty*rate;
  	printf("Total is %d\n",total);
  	printf("Do you want to continue");
  	scanf("%c",&ch);
  	ch = return 0;
  }
  while(ch=='y' || ch=='Y');
  }
	
	return 0;
}

