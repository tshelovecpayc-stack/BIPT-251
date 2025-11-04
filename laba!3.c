#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

    int main() {
        setlocale(LC_ALL, "Russian");
        double pounds;
        double kg, grams, tons;

        // Ввод данных
        printf("Введите вес в фунтах: ");
        scanf("%lf", &pounds);

        // Проверка корректности ввода
        if (pounds <= 0) {
            printf("Ошибка: вес должен быть положительным числом!\n");
            return 1;
        }

        // Вычисления
        kg = pounds * 0.453592;      // 1 фунт = 0.453592 кг
        grams = kg * 1000;           // 1 кг = 1000 грамм
        tons = kg / 1000;            // 1 тонна = 1000 кг

        // Вывод результатов
        printf("\n--- Результаты пересчета ---\n");
        printf("Фунты: %.2lf\n", pounds);
        printf("Килограммы: %.4lf\n", kg);
        printf("Граммы: %.2lf\n", grams);
        printf("Тонны: %.6lf\n", tons);

        return 0;
    }
