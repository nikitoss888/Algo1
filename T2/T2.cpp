#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <conio.h>

union sShort
{
    signed short num;
    struct Bites {
        unsigned short value    : 15;
        unsigned short sign     : 1;
    } bites;
} sshort;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("Введіть число: "); scanf_s("%d", &(sshort.num));

    printf("Структура даних: ");
    if (sshort.bites.sign) {
        printf("число від'ємне\n");
    }
    else {
        printf("число додатнє\n");
    }

    printf("Логічна операція: ");
    if (sshort.num < 0) {
        printf("число від'ємне\n");
    }
    else {
        printf("число додатнє\n");
    }

    printf("Значення числа: %d", abs(sshort.num));
    _getch();
}