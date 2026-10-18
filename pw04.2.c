#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint16_t i, r;
    float otv;

    printf("Введи два числа:");
    scanf("%hu %hu", &i, &r);

otv = (float)i * (float)r;

printf("Ответ: %.2f\n", otv);
printf("размеры uint16_t (i): %llu байт\n", (unsigned long long)sizeof(i));
printf("размеры uint16_t (r): %llu байт\n", (unsigned long long)sizeof(r));
printf("размеры float (otv): %llu байт\n", (unsigned long long)sizeof(otv));

return 0;
}