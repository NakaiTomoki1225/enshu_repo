#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRand(int min, int max);
void sortSimple(int *pArray, int *pOutput, int num);

int main(void) {

	int randArray[100];
	int output[100] = {10000};
	int num;
	int i;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("整数の数を入力：");
	scanf("%d", &num);

	srand((int)time(NULL));

	for (i = 0; i < num; i++) {
		randArray[i] = getRand(0, 100);
		printf("%d\n", randArray[i]);
	}

	printf("--------------------------------------------------------------------------------------------\n");

	sortSimple(randArray, output, num);

	printf("ソート後\n");
	for (i = 0; i < num; i++) {
		printf("%d\n", output[i]);
	}

	return 0;
}

int getRand(int min, int max) {

	return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}

void sortSimple(int *pArray, int *pOutput, int num) {
	int i;
	int j;
	int temp;

	for (i = 0; i < num; i++) {
		pOutput[i] = 1000;
		if (pArray[i] < pOutput[i]) {
			temp = pOutput[i];
			pOutput[i] = pArray[i];
			pArray[i] = temp;
		}
		for (j = i + 1; j < num; j++) {
			if (pArray[j] < pOutput[i]) {
				temp = pOutput[i];
				pOutput[i] = pArray[j];
				pArray[j] = temp;
			}
		}
	}
}
