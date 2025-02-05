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
	score s[3] = {
		{70, 70, 70},
		{80, 80, 80},
		{90, 90, 90}
	};

	score* p;
	p = s;

	s[0].sum = s[0].kor + s[0].eng + s[0].math;
	printf("%d", s[0].sum);

	(p + 0)->sum = (p + 0)->kor + (p + 0)->eng + (p + 0)->math;
	printf("%d", (p + 0)->sum);
	(*(p + 0)).sum = (*(p + 0)).kor + (*(p + 0)).eng + (*(p + 0)).math;
	return 0;
}