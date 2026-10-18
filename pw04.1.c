#include <stdio.h>

#define V 16

int main(void) {
        int stl, otv, ost;

printf("Введи кол-во ложек:");

    while (scanf("%d", &stl) == 1 && stl > 0) {
        otv = stl / V;
        ost = stl % V;

        printf("ложек: %d, чашек: %d, остаток ложек: %d\n", stl, otv, ost);
        break;
    }

    //  Потому что тип int хранит только целые числа,
    //  результат урезается до целого.

return 0;
}