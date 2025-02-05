#include <stdio.h>
void addNum(int* p1, double* p2, int increase);
int main()
{
	int num, integer;
	double dou;


	printf("Enter the integer. ");
	scanf_s("%d", &integer);
	printf("Enter the real number");
	scanf_s("%f", &num);
	addNum(&integer, &dou, num);
	printf("%d, %d, %f", num, integer, dou);
	
	return 0;
}
void addNum(int* p1, double* p2, int increase)
{
	*p1 += increase;
	*p2 += increase;
}