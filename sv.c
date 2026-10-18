#include <stdio.h>

int main(void) {
    int n, k, var1, var2, var3, var4, var5;

    n = 5;
    k = 0;
    var1 = (n % 30) + 1;
    var2 = ((n +(k + 7))% 30)+ 1;
    var3 = ((n +(k + 13))% 30)+ 1;
    var4 = ((n +(k + 19))% 30)+ 1;
    var5 = ((n +(k + 23))% 30)+ 1;

    printf("Вариант1: %d\n", var1);
    printf("Вариант2: %d\n", var2);
    printf("Вариант3: %d\n", var3);
    printf("Вариант4: %d\n", var4);
    printf("Вариант5: %d\n", var5);

    return 0;
}