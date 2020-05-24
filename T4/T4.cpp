#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

union Float {
    float x;
    struct Bites {
        unsigned int bite32 : 1;
        unsigned int bite31 : 1;
        unsigned int bite30 : 1;
        unsigned int bite29 : 1;
        unsigned int bite28 : 1;
        unsigned int bite27 : 1;
        unsigned int bite26 : 1;
        unsigned int bite25 : 1;
        unsigned int bite24 : 1;
        unsigned int bite23 : 1;
        unsigned int bite22 : 1;
        unsigned int bite21 : 1;
        unsigned int bite20 : 1;
        unsigned int bite19 : 1;
        unsigned int bite18 : 1;
        unsigned int bite16 : 1;
        unsigned int bite17 : 1;
        unsigned int bite15 : 1;
        unsigned int bite14 : 1;
        unsigned int bite13 : 1;
        unsigned int bite12 : 1;
        unsigned int bite11 : 1;
        unsigned int bite10 : 1;
        unsigned int bite9 : 1;
        unsigned int bite8 : 1;
        unsigned int bite7 : 1;
        unsigned int bite6 : 1;
        unsigned int bite5 : 1;
        unsigned int bite4 : 1;
        unsigned int bite3 : 1;
        unsigned int bite2 : 1;
        unsigned int bite1 : 1;
    } bi;
    struct Bytes {
        unsigned int byte4 : 8;
        unsigned int byte3 : 8;
        unsigned int byte2 : 8;
        unsigned int byte1 : 8;
    } by;
}fl;



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("Введіть число: "); scanf_s("%f", &fl.x);

    printf_s("\nБіти: %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d\n", 
        fl.bi.bite1, fl.bi.bite2, fl.bi.bite3, fl.bi.bite4, fl.bi.bite5, fl.bi.bite6, fl.bi.bite7, fl.bi.bite8, fl.bi.bite9, 
        fl.bi.bite10, fl.bi.bite11, fl.bi.bite12, fl.bi.bite13, fl.bi.bite14, fl.bi.bite15, fl.bi.bite16, fl.bi.bite17, 
        fl.bi.bite18, fl.bi.bite19, fl.bi.bite20, fl.bi.bite21, fl.bi.bite22, fl.bi.bite23, fl.bi.bite24, fl.bi.bite25, 
        fl.bi.bite26, fl.bi.bite27, fl.bi.bite28, fl.bi.bite29, fl.bi.bite30, fl.bi.bite31, fl.bi.bite32);

    printf_s("\nБайти: %02x %02x %02x %02x\n", fl.by.byte1, fl.by.byte2, fl.by.byte3, fl.by.byte4);
    printf_s("\nЗнак: %d, %c", fl.bi.bite1, fl.bi.bite1 ? '-' : '+');


    printf("\nОб\'єм пам\'яті: %d\n", sizeof(fl));
    _getch();
}
