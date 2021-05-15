#include<stdio.h>
int main()
{
	int i,j,p,pc=1,raw=21;
     for(i=1; i<=raw; i++)
     {
     	for(j=1; j<=raw; j++)
     	{
     		if(j<=pc || j>=raw-pc+1)
     		{
     			printf("*");
			 }
			 else
			 {
			 	printf(" ");
			 }
		 }
		 if(i<=raw/2)
		 pc++;
		 else
		 pc--;
		 printf("\n");
	 }
	
}

