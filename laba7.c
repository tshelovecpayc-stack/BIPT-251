#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int number;

    printf("=== ПЕРЕВОД ЧИСЕЛ В СЛОВА ===\n");
    printf("Введите число от 1 до 13: ");
    scanf("%d", &number);

    printf("Результат: %d - ", number);

    // Перевод числа в слово
    switch (number) {
    case 1:
        printf("один");
        break;
    case 2:
        printf("два");
        break;
    case 3:
        printf("три");
        break;
    case 4:
        printf("четыре");
        break;
    case 5:
        printf("пять");
        break;
    case 6:
        printf("шесть");
        break;
    case 7:
        printf("семь");
        break;
    case 8:
        printf("восемь");
        break;
    case 9:
        printf("девять");
        break;
    case 10:
        printf("десять");
        break;
    case 11:
        printf("одиннадцать");
        break;
    case 12:
        printf("двенадцать");
        break;
    case 13:
        printf("тринадцать");
        break;
    default:
        printf("ОШИБКА: число должно быть от 1 до 13!");
        break;
    }

    printf("\n");
    return 0;
}
