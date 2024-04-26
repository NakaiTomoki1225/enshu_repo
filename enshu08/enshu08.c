#include <stdio.h>

int main(void) {
	int start;
	int end;
	int period;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("セール開始日を入力：");
	scanf("%d", &start);
	printf("セール終了日を入力：");
	scanf("%d", &end);

	period = end - start;

	if ((start >= 10 && start <= 15) || (end >= 10 && end <= 15) || (start <= 10 && period >= 11)) {
		printf("工事期間と重複あり\n");
	}
	else {
		printf("工事期間と重複なし\n");
	}

	return 0;
}
