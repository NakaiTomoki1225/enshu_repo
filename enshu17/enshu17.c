#include <stdio.h>

int max(int Array[], int num); // 最大値をとる

int main(void) {
	int pointArray[100];
	int num;
	int maxNum;
	int i;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("生徒数を入力：");
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		printf("%d人目の点数：", i + 1);
		scanf("%d", &pointArray[i]);
	}

	maxNum = max(pointArray, num);

	printf("%d\n", maxNum);

	return 0;
}

int max(int Array[], int num) {
	int i;
	int j;
	int temp;

	for (i = 0; i < num - 1; i++) {
		for (j = i + 1; j < num; j++) {
			if (Array[j] > Array[i]) {
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
		}
	}

	return Array[0];

}
