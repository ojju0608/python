#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[10];
	printf("���ڿ� �Է�");
	if (gets_s(str, sizeof(str)) != NULL)
	{
		printf("�Է��� ���ڿ�: %s\n", str);
	}
	else
	{
		printf("���� �����÷ο�");
		clearerr(stdin);//�Է� ��Ʈ�� ���� �ʱ�ȭ
	}

	return 0;
}