#include <stdio.h>

void changeVal(int x, int y);
void changeRef(int* p1, int* p2);

int main()
{
	int a = 3, b = 5;
	changeVal(a, b);
	printf("val�Լ� ȣ�� �� : %d %d", a, b);
	printf("ref�Լ� ȣ�� �� : %d %d", a, b);
	return 0;
}
void changeVal(int x, int y)//�Ű����� x,y�� ���纻�� ����(���� ����)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}//�Լ��� ����Ǹ� x�� y�� �Ҹ�
void changeRef(int* p1, int* p2)
{
	int temp = p1;
	*p1 = *p2;
	*p2 = temp;

}