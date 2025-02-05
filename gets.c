#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_() {
	char str[100];
	printf("문자열 입력\n");
	gets(str);
	printf("%s", str);

	return 0;
}