#include <stdio.h>
#include <stdbool.h>


int main() {
	// 03 Even or Odd
	int N;
	printf("Enter an integer		N = "); scanf("%d", &N);
	if (N % 2 == 0)
		printf("%d is even", N);
	else
		printf("%d is odd", N);
	printf("\n\n***********************\n\n");

		// 04 Max of three numbers
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
		printf("Ajourné\n");
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


		return 0;
}