#include <stdio.h>

int digitCount(int num);
int power(int num);
int pow2(int num);

int main(void) {
	int binVal = 11001010;
	int array[10];
	int decVal = 0;
	int digit;
	int i;

	digit = digitCount(binVal);

	for (i = digit - 1; i >= 0; i--) {
			if (i == digit - 1) {
				array[i] = binVal / power(i);
			}
			else if (i == 0) {
				array[i] = binVal % 10;
			}
			else {
				array[i] = (binVal / power(i)) % 10;
			}
		}

	for (i = digit - 1; i >= 0; i--) {
		if (array[i] == 0) {
			continue;
		}
		else {
			decVal += (array[i] * pow2(i));
		}
	}


	printf("%d は10進数に変換すると %d です。\n", binVal, decVal);

	return 0;
}

int digitCount(int num) {
	int count;

	while (num != 0) {
		num = num / 10;
		count++;
	}

	return count;
}

int power (int num) {
	int i = 0;
	int result = 1;

	for (i = 0; i < num; i++) {
		result *= 10;
	}

	return result;
}

int pow2 (int num) {
	int result = 1;
	int i;

	for (i = 0; i < num; i++) {
		result *= 2;
	}

	return result;
}
