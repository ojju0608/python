/* 도서 정보를 3권 입력 받기
1) 구조체 정의(도서명, 저자, 가격, 수량, 매출액)
2) 도서명, 저자, 가격, 수량은 입력 받음
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BOOK_CNT 3
//도서 정보 구조체 정의
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
	printf("도서명: ");
	fgets(book->title, sizeof(book->title), stdin);//표준 입력에서 도서명을 읽어들임

	printf("저자명: ");
	fgets(book->author, sizeof(book->author), stdin);

	printf("가격: ");
	if (scanf("%d", &book->price) != 1)
	{
		printf("Invalid.\n");
		return 1;
	}
	printf("수량: ");
	if (scanf("%d", &book->quan) != 1)
	{
		printf("Invalid.\n");
		return 1;
		
	}
	getchar();//입력 버퍼 비우기

	book->revenue = book->price * book->quan;
}

void printBookInfo(Book book)
{
	printf("도서명: %s\n", book.title);
	printf("저자: %s\n", book.author);
	printf("가격: %d\n", book.price);
	printf("수량: %d\n", book.quan);
	printf("수입: %d\n", book.revenue);
}
int main() {
	Book books[BOOK_CNT];

	printf("===도서 정보 입력===");
	for (int i = 0; i < BOOK_CNT; i++)
	{
		printf("\n[%d번째 도서]\n", i+1);
		addBookInfo(&books[i]);
	}
	printf("\n===도서 정보 출력===");
	for (int i = 0; i < BOOK_CNT; i++)
	{
		printBookInfo(books[i]);

	}

	return 0;
}