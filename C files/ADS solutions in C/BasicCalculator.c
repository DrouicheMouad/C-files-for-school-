#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float a, b;
	char Operation;

	printf("Insert the first number: ");
	scanf("%f", &a);

	printf("Insert the second number: ");
	scanf("%f", &b);

	printf("Choose an operation (+ or - or * or / ): ");
	scanf(" %c", &Operation);

	switch (Operation) 
	{

	case'+':
		printf("%f", a + b);
		break;
	case'-':
		printf("%f", a - b);
		break;
	case'*':
		printf("%f", a * b);
		break;
	case'/':
		if (b != 0)
			printf("%f", a / b);
		else
			printf("\nERROR: Division by zero is not allowed");
		break;
	default:
		printf("\nERROR: Undefined Binary Operation");  // If the inserts a wrong operation 
	}

	return 0;
}