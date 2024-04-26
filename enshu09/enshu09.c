#include <stdio.h>

int main(void) {
	int multiple_17[1000];
	int num = 0;
	int i;
	int j;
	int flag= 0;

	for (i = 4000; i <= 5000; i++) {
		if (i % 17 == 0) {
			multiple_17[num] = i;
			num++;
		}
	}

	for (i = 0; i < num; i++) {
		printf("%d = ", multiple_17[i]);
		// 素因数分解
		for (j = 2; j * j <= multiple_17[i]; j++) {
			while (multiple_17[i] % j == 0) {
				if (flag != 0) {
					printf(" * ");
				}
				printf("%d", j);
				multiple_17[i] /= j;
				flag++;
			}
		}
		flag = 0;
		printf("\n");
	}
	return 0;
}
