#include <stdio.h>

int main() {
	/*
	// Quadrilateral
	int l, c;
	printf("Enter the number of lines "); scanf("%d",&l);
	printf("Enter the number of columns "); scanf("%d",&c);

	for (int i = 1; i <= l; i++) {
		for (int j = 1; j <= c; j++) {
			printf("*");
		}
		printf("\n");
	}
	// Right Triangle
	int w, h, temp;
	printf("Enter the width "); scanf("%d", &w);
	printf("Enter the height "); scanf("%d", &h);
	temp = 1;
	for (int x=1; x<=h; x++) {
		while(temp<=w) {
			for (int j = 1; j <= temp; j++)
			{ printf("*"); }
			printf("\n");
			temp += 1;
		}
	}

	//Triangle 
	int H;
	int StarsPerLine = 1;
	printf("Enter the height of the trianlge h= ");
	scanf("%d", &H);
	for (int i = 1; i <= H; i++) {
		// printing spaces
		for (int k = 1; k <= H - i ; k++) {
			printf(" ");
		}
		// printing stars
		for (int j = 1; j <= StarsPerLine; j++) {
			printf("*");
		}
		StarsPerLine += 2;

		printf("\n");
	}
	*/
	//Christmas Tree 
	int hl,ht;
	int SpaceForTrunk = 1;
	int StarsPerLine = 1;
	printf("Enter the height of the leaves: ");
	scanf("%d", &hl);
	printf("Enter the height of the trunk: ");
	scanf("%d", &ht);
	for (int i = 1; i <= hl; i++) {
		// printing spaces
		for (int k = 1; k <= hl - i; k++) {
			printf(" ");
		}
		// printing stars
		for (int j = 1; j <= StarsPerLine; j++) {
			printf("*");
		}
		StarsPerLine += 2;

		printf("\n");
	}

	for (int j = 1; j <= ht; j++) {
		while (SpaceForTrunk <= hl - 1) {
			printf(" ");
			SpaceForTrunk += 1;
		}
		printf("|\n");
		SpaceForTrunk = 1;
	}

	return 0;
}




