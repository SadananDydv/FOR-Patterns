#include<stdio.h>
int main()
{
	int i,j;
	for(i=1; i<=9; j++)
	{
		for(j=1; j<=9; j++)
		{
		
		if((j>=6-i && j<=4+i && i<=5) || (j>=i-4 && j<=14-i && i>5))
		
		{
			printf("*");
		}
		else
		{
		
		printf(" ");
	}
	}
	printf("\n");	
	}
}


		
