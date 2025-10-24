#include <stdio.h>
#include<math.h>
int main() {
	float S, P;
	printf("Enter the product A x B = ");
	scanf("%f",&P);
	printf("Enter the sum A + B = ");
	scanf("%f",&S);
	// Using the fact that (A,B) is the solution of the equation $x^2 - Sx + P = 0$
	float Delta = S * S - 4 * P;
	if (Delta >= 0) {
		float A = (S - sqrt(Delta)) / 2;
		float B = (S + sqrt(Delta)) / 2;
		printf("A = %f",A);
		printf("B = %f",B);
	}
	else
		printf("No such real numbers exist");
	return 0;
}