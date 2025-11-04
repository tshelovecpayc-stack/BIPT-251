#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int top, bottom, h;
    char s;

    printf("Введите ширину верха: ");
    scanf("%d", &top);

    printf("Введите ширину низа: ");
    scanf("%d", &bottom);

    printf("Введите высоту: ");
    scanf("%d", &h);

    printf("Введите символ: ");
    scanf(" %c", &s);

    printf("\n");

    // Проверка
    if (top <= 0 || bottom <= 0 || h <= 0) {
        printf("Ошибка!\n");
        return 1;
    }

    if (top >= bottom) {
        printf("Низ должен быть больше верха!\n");
        return 1;
    }

    int diff = bottom - top;

    // Рисование контура
    for (int i = 0; i < h; i++) {
        int w = top + (diff * i) / h;

        for (int j = 0; j < w; j++) {
            if (j == 0 || j == w - 1 || i == 0 || i == h - 1) {
                printf("%c", s);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}