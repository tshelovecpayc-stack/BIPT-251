#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");
    double x, y;

    printf("Проверка принадлежности точки заштрихованному ромбу\n");

    printf("Введите координату x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Ошибка! Введите числовое значение для x.\n");
        return 1;
    }

    printf("Введите координату y: ");
    if (scanf("%lf", &y) != 1) {
        printf("Ошибка! Введите числовое значение для y.\n");
        return 1;
    }

    printf("\nКоординаты точки: (%.2f, %.2f)\n", x, y);

    double center_x = 4.0;
    double center_y = 4.0;

    double a = 3.0;

    if (fabs(x - center_x) + fabs(y - center_y) <= a) {
        printf("Результат: Точка ПРИНАДЛЕЖИТ заштрихованному ромбу\n");
    }
    else {
        printf("Результат: Точка НЕ ПРИНАДЛЕЖИТ заштрихованному ромбу\n");
    }

    printf("\nГраницы ромба:\n");
    printf("|x - %.1f| + |y - %.1f| ≤ %.1f\n", center_x, center_y, a);
    printf("Внешний квадрат: 1 ≤ x ≤ 7, 1 ≤ y ≤ 7\n");
    printf("Вершины ромба: (4,1), (7,4), (4,7), (1,4)\n");

    return 0;
}