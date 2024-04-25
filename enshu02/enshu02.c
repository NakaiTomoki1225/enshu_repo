#include <stdio.h>

int main(void) {
	int i;
	int j;
	int sub;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			// ヨコ
			if (i == 0) {
				sub = (i + 1) * j;
				if (sub == 0) {
					printf("\t");
					continue;
				}
				printf("%d\t", sub);

				if (j == 9) {
					printf("\n");
				}
				continue;
			}

			if (j == 0) {
				printf("%d\t", i);
				continue;
			}

			printf("%d\t", i * j);
			if (j == 9) {
				printf("\n");
			}


		}
	}

	return 0;
}
