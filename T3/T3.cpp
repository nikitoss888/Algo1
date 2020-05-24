#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <conio.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    signed char num1;
    num1 = 5 + 127;
    printf("5 + 127 = %d\n", num1);
    num1 = 2 - 3;
    printf("2 - 3 = %d\n", num1);
    num1 = -120 - 34;
    printf("-120 - 34 = %d\n", num1);
    num1 = unsigned char(-5);
    printf("unsigned char(-5) = %d\n", num1);
    num1 = 56 & 38;
    printf("56 & 38 = %d\n", num1);
    num1 = 56 | 38;
    printf("56 | 38 = %d\n", num1);

    printf("\nПояснення: у знакових типах даних за виходу за межі значення змінює знак через бітову складову, де перший біт - знаковий.\nЗа виходу за значення він змінюється, як і число\n");

    printf_s("\nЗначення за int:\n");
    int num2;
    num2 = 5 + 127;
    printf("5 + 127 = %d\n", num2);
    num2 = 2 - 3;
    printf("2 - 3 = %d\n", num2);
    num2 = -120 - 34;
    printf("-120 - 34 = %d\n", num2);
    num2 = unsigned char(-5);
    printf("unsigned char(-5) = %d\n", num2);
    num2 = 56 & 38;
    printf("56 & 38 = %d\n", num2);
    num2 = 56 | 38;
    printf("56 | 38 = %d\n", num2);

    _getch();
}