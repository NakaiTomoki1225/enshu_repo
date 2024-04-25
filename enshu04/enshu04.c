#include <stdio.h>

int main(void) {
	char beforeChar;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("アルファベットを一文字だけ入力\n");
	scanf("%c", &beforeChar);

	if (beforeChar <= 90) {
		printf("%c", beforeChar + 32);
	}
	else if (beforeChar >= 97) {
		printf("%c", beforeChar - 32);
	}

	return 0;
}
