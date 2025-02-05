#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int num;
	

	printf("Enter the number: ");
	

	if (scanf("%d", &num) != 1)
	{
		printf("Invalid. ");
		return 1;
	}
	
	if (num % 2 == 0)
	{
		printf("%d is even.", num);
	}
	else {
		printf("%d is odd.", num);

	}

	
	return 0;
}