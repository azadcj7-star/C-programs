#include <stdio.h>
int main()
{
	float a,b;
	char operator;
	
	printf("Enter first number: ");
	scanf("%f",&a);
	
	printf("Enter operator(+,-,*,/): ");
	scanf(" %c",&operator);
	
	printf("Enter second number: ");
	scanf("%f",&b);
	
	switch(operator)
	{
		case'+':
		printf("Addition = %.2f",a+b);
		break;
		
		case'-':
		printf("Subtraction = %.2f",a-b);
		break;
		
		case'*':
		printf("Multiplication = %.2f",a*b);
		break;
		
		case'/':
		printf("Division = %.2f",a/b);
		break;
		
		default:
		printf("Please select valid operator");
		break;
	}
	return 0;
}
