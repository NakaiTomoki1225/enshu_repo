#include <stdio.h>

int main(void) {
	int target;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("整数を入力：");
	scanf("%d", &target);

	if (target == 0) {
		printf("x\n");
	}
	else if (target % 2 == 0 || target % 3 == 0 || target % 5 == 0 || target % 7 == 0){
		printf("◎\n");
	}
	else {
		printf("x\n");
	}

	return 0;
}
