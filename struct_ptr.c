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
	score s = { 70, 80, 90 };//나머지는 0으로 초기화
	score* p; //score 타입의 주소를 저장하는 포인터 선언
	p = &s;

	s.sum = s.kor + s.eng + s.math;
	printf("합계: %d\n", s.sum);

	p->sum = p->kor + p->eng + p->math;
	printf("합계: %d\n", p->sum);

	(*p).sum = (*p).kor + (*p).eng + (*p).math;

	return 0;
}