#include <stdio.h>

int hex2dec(char c);

int main(void) {
	char beforeHex;
	int afterHex;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("文字を入力(0～9, a～fのみ)\n");
	scanf("%c", &beforeHex);

	afterHex = hex2dec(beforeHex);

	printf("%d", afterHex);

	return 0;
}

int hex2dec(char c) {
	int num = 0;

	if (c <= 57) {
		num = c - 48;
	}
	else {
		num = (c - 97) + 10;
	}

	return num;
}
