#include <stdio.h>
#include <math.h>

int main() {
	//03 Odd or Even
	int N;
	printf("Enter an integer N = "); scanf("%d", &N);
	if (N % 2 == 0)
		printf("%d is even", N);
	else
		printf("%d is odd", N);

	//04 Absolute Value
	float x;
	printf("Enter a real number x = "); scanf("%f", &x);
	if (x % (-1) == x)
		printf("|%d| ", x);
	else
		printf("|%d|", -x);


	return 0;
}