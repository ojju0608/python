//#include <stdio.h>
//
//int main()
//{
//	int a[] = { 10, 20, 30, 40, 50 };//개수 생략 가능
//	int i, j = 10;
//	int* ptr = a;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", *ptr++);
//		printf("\n");
//	}
//	ptr = a;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", *++ptr);//전위증가연산자, ptr을 먼저 증가시키고 출력
//
//		printf("\n");
//	}
//	ptr = a;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", ++ *ptr);//*ptr값을 먼저 증가시키고 출력
//		printf("\n");
//	}
//	for (i = 0; i < 5; i++; j = 10)
//	{
//		a[i] = j;
//	}
//	return 0;
//}