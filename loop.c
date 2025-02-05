
#include<stdio.h>

int main_()
{
	int i = 0;

	printf("while conducting\n");
	i = 1;
	while (i <= 100)
	{
		printf("%2d", i++);
		//i++;
	}

	printf("\n");
	printf("do while conducting\n");

	i = 1;
	do
	{
		printf("%2d", i++);

	} while (i <= 100);
	printf("\n");

	printf("for conducting\n");

	for (i = 1; i <= 100; i++)
	{
		printf("%2d", i);

	}
	return 0;
}