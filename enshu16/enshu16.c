#include <stdio.h>

int main(void) {
	int pointArray[100];
	int num;
	int ast;
	int i;
	int j;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("生徒数を入力：");
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		printf("%d人目の点数を入力：", i + 1);
		scanf("%d", &pointArray[i]);
	}

	for (i = 0; i < num; i++) {
		printf("%d：", i + 1);
		ast = pointArray[i] / 10;
		for (j = 0; j < ast; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
