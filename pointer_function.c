#include <stdio.h>

void changeVal(int x, int y);
void changeRef(int* p1, int* p2);

int main()
{
	int a = 3, b = 5;
	changeVal(a, b);
	printf("val함수 호출 후 : %d %d", a, b);
	printf("ref함수 호출 후 : %d %d", a, b);
	return 0;
}
void changeVal(int x, int y)//매개변수 x,y는 복사본을 받음(원본 무관)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}//함수가 종료되면 x와 y는 소멸
void changeRef(int* p1, int* p2)
{
	int temp = p1;
	*p1 = *p2;
	*p2 = temp;

}