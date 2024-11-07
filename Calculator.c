#include <stdio.h>
#include <math.h>


int main()
{

	char op;
	double num1, num2, result;
	int i, fact=1;

	printf("****Simple Calculator****\n\n");
	printf("1.Addition(+)\n");
	printf("2.Subtraction(-)\n");
	printf("3.Multiplication(*)\n");
	printf("4.Division(/)\n");
	printf("5.Power(^)\n");
	printf("6.SquareRoot(~)\n");
	printf("7.Factorial(!)\n\n");

	printf("Enter number 1:");
	scanf("%lf", &num1);

	printf("Enter operator:");
	scanf(" %c", &op);

	printf("Enter number 2:");
	scanf("%lf", &num2);

	switch (op)
	{

	case '+':
		result = num1 + num2;
		break;

	case '-':
		result = num1 - num2;
		break;

	case '*':
		result = num1 * num2;
		break;

	case '/':
		result = num1 / num2;
		break;

	case '^':
		result = pow(num1, num2);
		break;

	case '~':
		result = sqrt(num1);
		break;

	case '!':
		for (i = 1; i <= num1; i++)
		{
			fact *= i;
			result = fact;
		}
	break;

	default:
		printf("Invalid Operator!");
	}

	printf("Result:");
	printf("%lf%c%lf=%lf", num1, op, num2, result);
	
	return 0;
}
