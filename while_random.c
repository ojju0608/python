//#include<stdio.h>
//#include<stdlib.h>//rand(), srand()
//#include<time.h>//시간을 시드로 쓰면 계속 랜덤수가 바뀜
//
//int main()
//{
//	int i = 0;
//	srand(time(NULL));//srand: 인수로 시드 받음, time: 인수로 시간(양수) 받음, NULL 넣으면 난수 발생
//	while (i != 3)
//	{
//		
//		i = rand() % 10 + 1;//rand() % n ==> 0~n의 무작위 수 
//		printf("%d\n", i);
//	}
//
//	return 0;
//}