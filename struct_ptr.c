#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct score
{
	int kor, eng, math, sum;
	double avg;
}score;

int main()
{
	score s = { 70, 80, 90 };//�������� 0���� �ʱ�ȭ
	score* p; //score Ÿ���� �ּҸ� �����ϴ� ������ ����
	p = &s;

	s.sum = s.kor + s.eng + s.math;
	printf("�հ�: %d\n", s.sum);

	p->sum = p->kor + p->eng + p->math;
	printf("�հ�: %d\n", p->sum);

	(*p).sum = (*p).kor + (*p).eng + (*p).math;

	return 0;
}