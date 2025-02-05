#include<stdio.h>

int main()
{
	int num = 10, * ptr = &num;
	
	printf("%d, %d\n", *ptr, num);

	*ptr = 12;
	printf("%d, %d", *ptr, num);//*를 붙이면 메모리 주소에 접근함, 값 변경도 가능
	

	return 0;
}