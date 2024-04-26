#include <stdio.h>

int euclidean(int num2, int rem);

int main(void) {
	int num1;
	int num2;
	int rem;
	int result;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("数1を入力：");
	scanf("%d", &num1);
	printf("数2を入力：");
	scanf("%d", &num2);

	rem = num1 % num2;

	if (rem != 0) {
		result = euclidean(num2, rem);
	}
	else {
		result = num2;
	}

	printf("%d と %d の最大公約数は %d\n", num1, num2, result);

	return 0;
}

int euclidean(int num2, int rem) {
	int num1;
	int result;

	while (rem != 0) {
		 num1 = num2;
		 num2 = rem;
		 rem = num1 % num2;

	}

	result = num2;
	return result;
}
