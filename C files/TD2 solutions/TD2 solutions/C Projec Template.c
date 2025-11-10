#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main() {
	// 03 Even or Odd
	int N;
	printf("Enter an integer		N = "); scanf("%d", &N);
	if (N % 2 == 0)
		printf("%d is even", N);
	else
		printf("%d is odd", N);
	printf("\n\n***********************\n\n");

	//04 Absolute Value
	float x;
	printf("Enter a real number x = "); scanf("%f", &x);
	if (x > 0)
		printf("|%f| = %f", x, x);
	else
		printf("|%f| = %f", x, -x);
	printf("\n\n***********************\n\n");


	// 05 Max of three numbers
	float a, b, c, max;
	printf("Enter a real number		a = "); scanf("%f", &a);
	printf("Enter a real number		b = "); scanf("%f", &b);
	printf("Enter a real number		c = "); scanf("%f", &c);

	if (a > b) {
		if (a > c)
			max = a;
		else
			max = c;
	}
	else if (b < c) {
		max = c;
	}
	else
		max = b;
	printf("The maximum is		%f\n", max);
	if (a == b) {
		if (b == c)
			printf("Note: a = b = c");
		else
			printf("Note: a = b ");
	}
	else if (a == c)
		printf("Note: a = c ");
	else if (b == c)
		printf("Note: b = c ");
	printf("\n\n***********************\n\n");

	// 06 Mentions 
	float Note;
	printf("Entrez votre note "); scanf("%f", &Note);
	printf("Mention : ");

	if (0 > Note  || Note > 20)
		printf("Note invalide");
	else if (Note < 10)
		printf("Ajourn\u00E9\\n");
	else if (Note < 12)
		printf("Passable\n");
	else if (Note < 14)
		printf("Assez bien\n");
	else if (Note < 16)
		printf("Bien\n");
	else
		printf("Très bien\n");
	printf("\n\n***********************\n\n");

	//07 Leap Year
	int year;
	printf("Eter the year "); scanf("%d", &year);
	bool c1 = (year % 4 == 0 && year % 100 != 0);
	bool c2 = (year % 400 == 0);

	if (c1 || c2)
		printf("%d is a leap year", year);
	else
		printf("%d is not a leap year", year);

	printf("\n\n***********************\n\n");

	//08  Triangle Type
	float A, B, C;
	printf("Enter the first side's length	"); scanf("%f", &A);
	printf("Enter the second side's length	"); scanf("%f", &B);
	printf("Enter the third side's length	"); scanf("%f", &C);
	bool Possible = (A + B > C && A + C > B && B + C > A);
	bool Isosceles = (A == B || B == C || A == C);
	if (!Possible)
		printf("Can't make a triangle using these lenghts\n");
	else {
		if (A == B && B==C)
			printf("This triangle is equilateral\n");
		else if (Isosceles)
			printf("This triangle is isosceless\n");
		else
			printf("This trianlge is scalene\n");
	}



		return 0;
}