/* ���� ������ 3�� �Է� �ޱ�
1) ����ü ����(������, ����, ����, ����, �����)
2) ������, ����, ����, ������ �Է� ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BOOK_CNT 3
//���� ���� ����ü ����
typedef struct
{
	char title[100];
	char author[100];
	int price;
	int quan;
	int revenue;
}Book;

void addBookInfo(Book* book)
{
	printf("������: ");
	fgets(book->title, sizeof(book->title), stdin);//ǥ�� �Է¿��� �������� �о����

	printf("���ڸ�: ");
	fgets(book->author, sizeof(book->author), stdin);

	printf("����: ");
	if (scanf("%d", &book->price) != 1)
	{
		printf("Invalid.\n");
		return 1;
	}
	printf("����: ");
	if (scanf("%d", &book->quan) != 1)
	{
		printf("Invalid.\n");
		return 1;
		
	}
	getchar();//�Է� ���� ����

	book->revenue = book->price * book->quan;
}

void printBookInfo(Book book)
{
	printf("������: %s\n", book.title);
	printf("����: %s\n", book.author);
	printf("����: %d\n", book.price);
	printf("����: %d\n", book.quan);
	printf("����: %d\n", book.revenue);
}
int main() {
	Book books[BOOK_CNT];

	printf("===���� ���� �Է�===");
	for (int i = 0; i < BOOK_CNT; i++)
	{
		printf("\n[%d��° ����]\n", i+1);
		addBookInfo(&books[i]);
	}
	printf("\n===���� ���� ���===");
	for (int i = 0; i < BOOK_CNT; i++)
	{
		printBookInfo(books[i]);

	}

	return 0;
}