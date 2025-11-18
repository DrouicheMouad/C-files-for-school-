#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	char Password[] = "msn22";
	bool ValidPassword = 0;
	char Input[20];
	while (ValidPassword = 0) {
		printf("Use your password "); scanf("%5s", Input);
		for (int i = 1; i = 5; i++) {
			if (Password[i] = Input[i]) {
				ValidPassword = 1;
			}
			else {
				ValidPassword = 0;
			}
		}
		if (ValidPassword = 0) {
			printf("Wrong Password\n");
		}
	}
	printf("Welcome !\n");
	return 0;
}