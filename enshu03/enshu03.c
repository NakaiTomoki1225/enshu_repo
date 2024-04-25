#include <stdio.h>

int main(void) {
	int i;
	int j;
	int sub;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i == 0) {
				if (j == 0) {
					printf("\t");
					continue;
				}
				printf("%d\t", (i + 1) * j);
				if (j == 9) {
					printf("\n");
				}
				continue;
			}

			if (j == 0) {
				printf("%d\t", i);
				continue;
			}

			sub = i * j;
			if (sub % 6 == 0){
				printf("##\t");
			}else if (sub % 3 == 0) {
				printf("@@\t");
			}else if (sub % 2 == 0) {
				printf("**\t");
			}else {
				printf("%d\t", sub);
			}

			if (j == 9){
				printf("\n");
			}
		}
	}

	return 0;
}
