#include <stdio.h>
int main() {
	int a = 0;
	int b = 0;

	printf("���� �� ���� �Է��ϼ��� >>");
	scanf_s("%d %d", &a, &b); // ���� a�� b �Է¹ޱ�
	int c = a * b; // a�� b�� ���Ͽ� c�� ����

	printf("%d", c); // �Է¹��� �� ���� ���� �� ���

	return 0;
}