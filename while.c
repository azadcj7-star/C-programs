#include <stdio.h>
int main()
{
	int number,sum = 0;
	
	printf("Enter number to add (enter 0 to stop) :");
	scanf("%d",&number);
	
	while(number != 0)
	{
		sum = sum + number;
		printf("enter next number: ");
		scanf("%d",&number);
	}
	printf("total sum = %d\n",sum);
	return 0;
}
