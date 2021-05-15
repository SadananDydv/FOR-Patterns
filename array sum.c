#include<stdio.h>
int main()
{
	int a[5],i,sum=0;
	printf("Enter the five values in array\n");
	
	for(i=0; i<5; i++)
	{
	
	 scanf("%d",a[i]);
    }
 			printf("Display the array values");
 			
 			for(i=0; i<5; i++)
			{
				printf("%d\n",a[i]);
				sum = sum + a[i];
			}
			printf("Sum of all element is %d\n",sum);
			return 0;
}


