#include <stdio.h>
int main()
{
	int pin,correct_pin = 1212;
	do
	{
		printf("Enter 4 digit pin: ");
		scanf("%d",&pin);
		
		if(pin != correct_pin)
		{
			printf("wrong pin! please enter correct pin\n");
		}
	}
	while(pin != correct_pin);
	printf("Correct pin! Welcome");
	return 0;
}
