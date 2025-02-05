#include<stdio.h>

int main() {
	int fee = 2000;
	int age = 0;

	printf("Age: ");
	if (scanf_s("%d", &age) != 1)
	{
		printf("Invalid.\n");
		return 1;
	}

	if (age >= 60)
	{
		fee = 0;
	}

	printf("entrance fee is %d.", fee);
	return 0;


}