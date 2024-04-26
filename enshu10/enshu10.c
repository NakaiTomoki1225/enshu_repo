#include <stdio.h>

int checkDigit(int num);
int power(int x);

int main(void) {
	int arabia;
	int numArray[20];
	char charArray[15] = {'一', '二', '三', '四', '五', '六', '七', '八', '九' , '十', '百', '千', '万', '億'};
	char output[20];
	int digit = 0;
	int i;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("整数を入力：");
	scanf("%d", &arabia);

	digit = checkDigit(arabia);

	for (i = digit - 1; i >= 0; i--) {
		if (i == digit - 1) {
			numArray[i] = arabia / (power(i));
			printf("%d番目の桁：%d\n", i + 1, numArray[i]);
		}
		else if (i == 0) {
			numArray[i] = arabia % 10;
			printf("%d番目の桁：%d\n", i + 1, numArray[i]);
		}
		else {
			numArray[i] = (arabia / power(i)) % 10;
			printf("%d番目の桁：%d\n", i + 1, numArray[i]);
		}
	}

	for (i = digit - 1; i >= 0; i--) {

	}

	return 0;
}

int checkDigit(int num) {
	int count;

	while (num != 0) {
		num = num / 10;
		count++;
	}

	return count;
}

int power (int x) {
	int i = 0;
	int result = 1;

	for (i = 0; i < x; i++) {
		result *= 10;
	}

	return result;
}
