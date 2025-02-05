#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct score
{
	int kor, eng, math, sum;
	double avg;
}score;

void printTotal(score* p);

int main()
{
	score s[3] = {
		{70, 70, 70},
		{80, 80, 80},
		{90, 90, 90}
	};
	printTotal(s);
	return 0;
}

void printTotal(score* p)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		p[i].sum = p[i].kor + p[i].eng + p[i].math;
		printf("%d¹ø ÃÑÁ¡: %d\n", i + 1, p[i].sum);
	}
}