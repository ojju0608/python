#include<stdio.h>

int main()
{
	int num = 10, * ptr = &num;
	
	printf("%d, %d\n", *ptr, num);

	*ptr = 12;
	printf("%d, %d", *ptr, num);//*�� ���̸� �޸� �ּҿ� ������, �� ���浵 ����
	

	return 0;
}