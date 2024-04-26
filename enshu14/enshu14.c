#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRand(int min, int max);
void merge(int Array[], int left, int mid, int right);
void sortMerge(int Array[], int left, int right);

int main(void) {
	int rndArray[1000];
	int num;
	int i;

	setvbuf(stdout, NULL, _IONBF, 0);
	srand((int)time(NULL));

	printf("数を入力：");
	scanf("%d", &num);

	printf("ソート前\n");
	for (i = 0; i < num; i++) {
		rndArray[i] = getRand(0, 1000);
		printf("%d\n", rndArray[i]);
	}

	sortMerge(rndArray, 0, num);

	printf("ソート後\n");
	for (i = 0; i < num; i++) {
		printf("%d\n", rndArray[i]);
	}

	return 0;
}

int getRand(int min, int max) {
	return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}

void merge(int Array[], int left, int mid, int right) {
	int leftNum = (mid - left); // 先頭～中央の要素数
	int rightNum = (right - mid); // 中央～最後の要素数
	int leftArray[leftNum]; // 左側の配列
	int rightArray[rightNum]; // 右側の配列
	int i = 0;
	int j = 0;
	int k = 0;

	// 分割
	for (i = 0; i < leftNum; i++) {
		leftArray[i] = Array[left + i];
	}
	for (i = 0; i < rightNum; i++) {
		rightArray[i] = Array[mid + i];
	}

	i = 0;
	j = 0;
	for (k = left; k < right; k++) {
		// 小さい順で元の配列へ代入
		if (leftArray[i] <= rightArray[j] && i < leftNum) {
			Array[k] = leftArray[i++];
		}
		else {
			Array[k] = rightArray[j++];
		}
	}
}

void sortMerge(int Array[], int left, int right) {
	int mid; // 分割点
	if (left + 1 < right) {
		mid = (left + right) / 2;
		sortMerge(Array, left, mid); // 先頭～中央まで
		sortMerge(Array, mid, right); // 中央～最後まで
		merge(Array, left, mid, right); // 配列を統合
	}
}
