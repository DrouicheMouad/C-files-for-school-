#include <stdio.h>

int main() {
	float A, B, C, temp;
	printf("Enter a real number A = ");
	scanf("%f",&A);
	printf("Enter a real number B = ");
	scanf("%f", &B);
	printf("Enter a real number C = ");
	scanf("%f", &C);
	temp = B;
	B = A;
	A = C;
	C = temp;
	printf("Values after swaping \nA = %f\nB = %f\nC = %f\n", A, B, C);

	return 0;
}