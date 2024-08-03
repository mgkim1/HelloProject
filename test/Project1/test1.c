#include <stdio.h>
int main() {
	int a = 0;
	int b = 0;

	printf("곱할 두 수를 입력하세요 >>");
	scanf_s("%d %d", &a, &b); // 정수 a와 b 입력받기
	int c = a * b; // a와 b를 곱하여 c에 저장

	printf("%d", c); // 입력받은 두 값을 곱한 값 출력

	return 0;
}