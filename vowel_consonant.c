#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char ch;
	printf("Enter the letter: ");
	if (scanf("%c", &ch) != 1)
	{
		printf("Invalid.");
		return 1;
	}
	if (ch >= 'a' && ch <= 'z')
	{
		ch -= 32;
	}
	switch (ch)
	{
	case 'A': case'E': case'I': case'O': case'U':// 연속적으로 쓰는게 가능
		printf("It's vowel.\n");
		break;
	default:
		if (ch >= 'A' && ch <= 'Z')
			printf("It's consonant.\n");
		else
			printf("It's code.\n");
	}
	return 0;
}