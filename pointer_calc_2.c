//#include <stdio.h>
//
//int main()
//{
//	int a[] = { 10, 20, 30, 40, 50 };//���� ���� ����
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
//		printf("%d", *++ptr);//��������������, ptr�� ���� ������Ű�� ���
//
//		printf("\n");
//	}
//	ptr = a;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", ++ *ptr);//*ptr���� ���� ������Ű�� ���
//		printf("\n");
//	}
//	for (i = 0; i < 5; i++; j = 10)
//	{
//		a[i] = j;
//	}
//	return 0;
//}