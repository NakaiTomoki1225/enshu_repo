#include <stdio.h>

int main(void) {
	int nenrei;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("年齢を入力：");
	scanf("%d", &nenrei);

	if (nenrei < 0 || nenrei > 100) {
		printf("無効\n");
	}else if (nenrei >= 60) {
		printf("定年後も元気100%%で過ごしてください。\n");
	}else if (nenrei >= 20) {
		printf("成年です。\n飲酒・喫煙は控えめに。\n");
	}else {
		printf("未成年です。\n地方自治体によっては医療費が\\200のところも。\n");
	}

	return 0;
}
