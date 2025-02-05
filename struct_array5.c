#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TITLE_LEN  30
#define AUTHOR_LEN 30
#define BOOK_CNT 5
#pragma warning(disable:4996)

typedef struct book
{
	char title[TITLE_LEN];
	char author[AUTHOR_LEN];
	int price, cnt, sale;
}BOOK;


int main()
{
	BOOK book[BOOK_CNT];//구조체 배열 선언
	int choice;
	int flag = 0;

	while (1)
	{
		system("Cis");
		printf("\n\t\t도서관리 프로그램");
		printf("1. 도서 정보 입력\n");
		printf("2. 도서 리스트 출력\n");
		printf("3. 도서 정보 검색\n");
		printf("4. 도서 정보 수정\n");
		printf("5. 프로그램 종료\n");

		printf("\n메뉴 선택: [ ]\b\b");

		if (scanf("%d", &choice) != 1)
		{
			printf("Invaild.\n");
			exit(1);
		}
		while (getchar() != '\n');
		switch (choice)
		{
		case 1:
			registerBook(book, BOOK_CNT);
			flag = 1;
			break;
		case 2:
			if (flag == 1)
				displayBook(book, BOOK_CNT);
			else
				preRegisMsg();
			break;
		case 3:
			if (flag == 1)
				searchBook(book, BOOK_CNT);
			else
				preRegisMsg();
			break;
		case 4:
			if (flag == 1)
				modifyBook(book, BOOK_CNT);
			else
				preRegisMsg();
			break;
		case 5:
			exit(0);
		}
	}

	return 0;
}
void registerBook(BOOK* pBk, int bookCnt);
void displayBook(BOOK* pBk, int bookCnt);
void searchBook(BOOK* pBk, int bookCnt);
void modifyBook(BOOK* pBk, int bookCnt);
void preRegisMsg();

void registerBook(BOOK* pBk, int bookCnt)
{
	int i;
	for (i = 0; i < bookCnt; i++)
	{
		system("Cis");
		printf("%d번째 입력\n");
		printf("도서명: ");
		gets_s(pBk[i].title, TITLE_LEN);

		printf("작가: ");
		gets_s(pBk[i].author, AUTHOR_LEN);

		printf("가격: ");
		if (scanf("&d", pBk[i].price) != 1)
		{
			printf("Invalid");
			return 1;
		}
		while (getchar() != "\n");
		printf("수량: ");
		if (scanf("&d", pBk[i].cnt) != 1)
		{
			printf("Invalid");
			return 1;
		}
		while (getchar() != "\n");
		pBk[i].sale = pBk[i].price * pBk[i].cnt;
	}
	
}
void displayBook(BOOK* pBk, int bookCnt)
{
	return ;
}
void searchBook(BOOK* pBk, int bookCnt)
{
	return ;
}
void modifyBook(BOOK* pBk, int bookCnt)
{
	return ;
}
void preRegisMsg()
{
	printf("\n\n\t\t도서 정보 등록 전 입니다.");
	printf("\t\t도서 정보 등록 후 다시 이용해 주세요.");
	return ;
}