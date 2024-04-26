#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8

// 配列を出力する
void printArray(int A[], int n);

// 配列の要素を入れ替える
void swap(int A[], int a, int b);

// 親子の比較
void compare(int A[], int n, int target);

// 並べ替え
void rearrange(int A[], int n);

// ヒープソートを行う
void heapSort(int A[], int n);

int getRand(int min, int max);

int main(void) {
    int num;
    int rndArray[100];
    int i;

    setvbuf(stdout, NULL, _IONBF, 0);
    srand((int)time(NULL));

    printf("数を入力：");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
    	rndArray[i] = getRand(0, 100);
    }

    printArray(rndArray, num);
    heapSort(rndArray, num);
    printArray(rndArray, num);

    return 0;
}

void printArray(int A[], int n) {
	int i;
    for (i = 0; i < n; i++)
        if (i == 0)
            printf("%d", A[i]);
        else
            printf(" %d", A[i]);

    printf("\n");
}

void swap(int A[], int a, int b) {
    int temp;
    temp = A[a];
    A[a] = A[b];
    A[b] = temp;
}

void compare(int A[], int n, int target) {
    int left = target * 2 + 1;
    int right = target * 2 + 2;
    int max_idx = target;

    // left が存在する場合、target と比較
    if (left < n)
        if (A[target] < A[left])
            max_idx = left;

    // right が存在する場合、max_idx と比較
    if (right < n)
        if (A[max_idx] < A[right])
            max_idx = right;

    // target より大きい値があれば交換
    if (target != max_idx) {
        swap(A, target, max_idx);
        compare(A, n, max_idx);
    }
}

void rearrange(int A[], int n) {
	int i;
    // ヒープの初期化
    for (i = (n / 2) - 1; i >= 0; i--)
        compare(A, n, i);
}

void heapSort(int A[], int n) {
    rearrange(A, n);

    while (n > 1) {
        swap(A, 0, --n); // ヒープサイズを 1 減らす
        compare(A, n, 0);
    }
}

int getRand(int min, int max) {
	return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}
