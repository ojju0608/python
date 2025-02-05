//#include <stdio.h>
//
//int main()
//{
//
//
//	int* p, a[5] = { 10, 20, 30, 40, 50 };//배열 이름 a는 상수, 나중에 변경 불가
//	p = a;//배열 a의 시작 주소(a[0]의 주소)
//	//배열 이름 = 포인터 상수
//
//	printf("%p", a);
//	printf("\n");
//	printf("%d", *p);//10
//	printf("\n");
//	printf("%d", *p+2);//12
//	printf("\n");
//	printf("%d", *(p + 2));//30
//	printf("\n");
//	printf("%d", p[2]);//30
//	p += 2;//p가 두칸 앞으로 이동, p = a[2]의 주소
//	printf("\n");
//	printf("%d", *p);//30
//	//a = p+2: 오류
//	return 0;
//}