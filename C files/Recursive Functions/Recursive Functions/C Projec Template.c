#include <stdio.h>

int Factorial(int N) {
	if (N == 0 || N == 1)
		return 1;
	else
		return N*Factorial(N - 1);
}
void ReadPrices(int* n,float *total, float* max, float* min){
	float price=1;
	*n = 0;
	*total = 0;
	*min = 0;
	*max = 0;

	while (1){
		printf("Enter the price of item %d		", (*n)+1); scanf("%f", &price);
		if (price <= 0)
			break;
		if (*n == 0) 
				*min = *max = price;
		if (price > *max)
				*max = price;
	    if (price < *min )
				*min = price;
			*total += price;
			(*n)++;
	}

}
int main() {
	/* int N;
	printf("Enter a natural number	"); scanf("%d", &N);
	printf("%d",FactorialRecursive(N));
	*/
	float total, max, min; 
	int n;
	ReadPrices(&n, &total,&max,&min);
	printf("The total price is	%f\n", total);
	printf("The total average price is	%f\n",total/n);
	printf("The max price is %f\n", max);
	printf("The min price is %f\n", min);


	return 0;
}