#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
#include <conio.h>

struct Date {
	unsigned char Year : 7;
	unsigned char Day : 5;
	unsigned char WeekDay : 3;
	unsigned char Month : 4;
	unsigned char Hour : 5;
	unsigned char Minutes : 6;
	unsigned char Seconds : 6;
};

enum Week_Days
{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

int Day_Flag(int day, int month, int year) {
	if (day > 0) {
		if (month == 2) {
			if (year % 4 == 0) {
				if (day <= 29) {
					return false;
				}
				else return true;
			}
			else
				if (day <= 28) {
					return false;
				}
				else return true;
		}
		else if ((month < 8 && month % 2 == 0) || (month > 8 && month % 2 != 0)) {
			if (day <= 30) {
				return false;
			}
			else return true;
		}
		else if (day <= 31) {
			return false;
		}
		else return true;
	}
	else return true;
}

int main(int argc, char** argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Date date;
	int n;
	do {
		printf("Уведіть рік (до 20-ти - 21-ре ст (2015 = 15), до 99 - 19 (1921 = 21), літери зупинять програму): "); scanf_s("%d", &n);
	} while (n > 99 || n < 0);
	date.Year = n;

	do {
		printf("Уведіть місяць: "); scanf_s("%d", &n);
	} while (n > 12 || n < 1);
	date.Month = n;

	int year;
	time_t t;
	tm* now;
	time(&t);
	now = localtime(&t);
	int local_year = now->tm_year - 100;

	if (date.Year <= local_year) {
		year = date.Year + 2000;
	}
	else {
		year = date.Year + 1900;
	}

	do {
		printf("Уведіть день згідно місяця та року: "); scanf_s("%d", &n);
	} while (Day_Flag(n, date.Month, date.Year));
	date.Day = n;

	do {
		printf("Уведіть день тижня (на дійсність не зважайте): "); scanf_s("%d", &n);
		n--;
	} while (n > 6 || n < 0);
	date.WeekDay = n;

	do {
		printf("Уведіть годину: "); scanf_s("%d", &n);
	} while (n > 23 || n < 0);
	date.Hour = n;

	do {
		printf("Уведіть хвилину: "); scanf_s("%d", &n);
	} while (n > 59 || n < 0);
	date.Minutes = n;

	do {
		printf("Уведіть секунду: "); scanf_s("%d", &n);
	} while (n > 59 || n < 0);
	date.Seconds = n;

	char day[11];
	switch (date.WeekDay)
	{
	case Monday:
		strcpy(day, "понеділок");
		break;
	case Tuesday:
		strcpy(day, "вівторок");
		break;
	case Wednesday:
		strcpy(day, "середа");
		break;
	case Thursday:
		strcpy(day, "четвер");
		break;
	case Friday:
		strcpy(day, "п\'ятниця");
		break;
	case Saturday:
		strcpy(day, "субота");
		break;
	case Sunday:
		strcpy(day, "неділя");
		break;
	default:
		break;
	}

	printf("Ваша дата:\n%04d.%02d.%02d %02d:%02d:%02d,\n%s\n\n", year, date.Month, date.Day, date.Hour, date.Minutes, date.Seconds, day);
	_getch();
}