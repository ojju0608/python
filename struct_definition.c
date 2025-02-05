#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define NAME_LEN 10
#define GENDER_LEN 5

struct student
{
	char name[NAME_LEN];
	int age;
	char gender[GENDER_LEN];
};

int main() {
	struct student s, s2, s3;
	//구조체 변수 초기화
	s.age = 20;
	strcpy(s.name, "ojh");//네임은 포인터이기에 이런식으로 초기화
	strcpy(s.gender, "male");
	s2.age = 22;
	strcpy(s2.name, "ggg");
	strcpy(s2.gender, "female");

	printf("Your name is %s and gender is %s.\n", s.name, s.gender);
	printf("Your age is %d.\n", s.age);
	printf("Your name is %s and gender is %s.\n", s2.name, s2.gender);
	printf("Your age is %d.\n", s2.age);

	return 0;
}