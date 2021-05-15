/*
1
1 2 
1   3
1     4
1 2 3 4 5
*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(i==1 || i==5 || j==1 || j==5)
			printf("%d",i);  
	}
		printf("\n");
	
}
}
	
