#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define NAME_LEN 10
#define STUDENT_NUM 3
typedef struct score
{
	char name[NAME_LEN];
	int kor, eng, math;
	double avg;
}score;

int main() {
	//����ü �迭�� ����
	score s[STUDENT_NUM];
	for (int i = 0; i < STUDENT_NUM; i++)
	{
		system("Cis");//ȭ�� �����
		printf("\n%d��° �л� ���� �Է�\n", i + 1);
		printf("�̸�: ");
		gets_s(s[i].name, NAME_LEN);

		printf("���� ���� ���� ���� �Է�");
		if (scanf("%d %d %d", &s[i].kor, &s[i].eng, &s[i].math) != 3)
		{
			printf("Invalid.");
			return 1;
		}
		while (getchar() != '\n');
		s[i].avg = (s[i].kor + s[i].eng + s[i].math) / 3.0;

	}
	system("Cis");
	printf("\n\t\t --�л� ���� ����Ʈ-- \n\n");
	printf("%-20s %8s %8s %8s %8s\n", "�̸�", "����", "����", "����", "���");
	printf("----------------------------------------\n");

	for (int i = 0; i < STUDENT_NUM; i++)
	{
		printf(" %-20s %8d %8d %8d %8f", s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].avg);
	}
	return 0;
}