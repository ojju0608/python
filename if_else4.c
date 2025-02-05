//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//	int kor, eng, math;
//	int result;
//
//	printf("Enter the score(kor, eng, math): ");
//	result = scanf("%d %d %d", &kor, &eng, &math);//scanf에 입력되는 값의 개수가 카운트됨
//
//	if (result != 3)// 입력되는 값의 개수가 달라도, 입력값에 다른 자료형이 와도 오류
//	{
//		printf("Invalid\n");
//		return 1;
//	}
//	if (kor < 60 || eng < 60 || math < 60)
//		printf("Non pass.");
//	else
//		printf("Pass.");
//
//	return 0;
//}