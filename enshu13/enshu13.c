#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRand(int min, int max);
void sortBubble(int *pArray, int num);

int main(void) {
	int rndArray[100];
	int num;
	int i;

	setvbuf(stdout, NULL, _IONBF, 0);
	srand((int)time(NULL));

	printf("整数の数を入力：");
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		rndArray[i] = getRand(0, 100);
		printf("%d\n", rndArray[i]);
	}

	sortBubble(rndArray, num);

	printf("昇順に表示\n");

	for (i = 0; i < num; i++) {
		printf("%d\n", rndArray[i]);
	}

	return 0;
}

int getRand(int min, int max) {
	return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}

void sortBubble(int *pArray, int num) {
	int i;
	int j;
	int temp;

	for (i = 0; i < num - 1; i++) {
		for (j = i + 1; j < num; j++) {
			if (pArray[j] < pArray[i]) {
				temp = pArray[i];
				pArray[i] = pArray[j];
				pArray[j] = temp;
			}
		}
	}
}
