#include<stdio.h>
int main()
{
	int i,j,a;
	for(i=1; i<=5; i++)
	{
		a=1;
		for(j=1; j<=9; j++)
		{
			if(i==j ||j==6-i && a)
			{
				a=0;
				printf("*");
			}
			else
			{
				a=1;
				printf(" ");
			}
		}
		printf("\n");
	}	
	
}

