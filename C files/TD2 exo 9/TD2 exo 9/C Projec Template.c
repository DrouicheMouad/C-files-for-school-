#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, d;
	printf("Solving the equation ax^2 + bx + c = 0 in R :-)\n");
	printf("Enter a		"); scanf("%f", &a);
	printf("Enter b		"); scanf("%f", &b);
	printf("Enter c		"); scanf("%f", &c);

	if (a != 0)
	{
		if (b != 0)
		{
			d = b * b - 4 * a * c;
			if (d > 0)
				printf("There are two solutions x_1 = %f	x_2 = %f ", (-b - sqrt(d)) / 2 / a, (-b + sqrt(d)) / 2 / a);
			else if (d == 0)
				printf("There is one(duplicated)solution x = %f", -b / 2 / a);
			else
				printf("There are no soltuions in R");
		}
		else //if b==0
		{
			if (a * c <= 0)
			{
				if (c == 0)
					printf("The only solution is 0");
				else
					printf("The are two solutions x_1 = %f		x_2 = %f", sqrt(-c / a), -sqrt(-c / a));
			}
			else
				printf("There are no solutions in R ");

		}

	}
	else // if a==0
	{
		if (b != 0)
			printf("The only solutio is x = %f", -c / b);
		else //if b==0
		{
			if (c != 0)
				printf("contradiction (c is not equal to zero)");
			else
				printf("The are infinitly so many solution");
		}
	}


	return 0;
}
