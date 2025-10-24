#include <stdio.h>
#include <math.h>

const float pi = 3.14159;
int main() {
	float r;
	printf("Enter the radius : "); 
	scanf("%f",&r);
	printf("The area is %f", pi*pow(r,2));

	return 0;
}