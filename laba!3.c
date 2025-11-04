#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    double bit, kbyte;

    // бит/с → Кбайт/с
    printf("Введите скорость в бит/с: ");
    scanf("%lf", &bit);
    kbyte = bit / 8192;
    printf("%.2f бит/с = %.6f Кбайт/с\n\n", bit, kbyte);

    // Кбайт/с → бит/с  
    printf("Введите скорость в Кбайт/с: ");
    scanf("%lf", &kbyte);
    bit = kbyte * 8192;
    printf("%.2f Кбайт/с = %.2f бит/с\n", kbyte, bit);

    return 0;
} 
