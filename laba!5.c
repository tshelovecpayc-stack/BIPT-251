#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    // Исходные данные
    double x = 14.26;
    double y = -1.22;
    double z = 3.25e2;  // 3.25 ? 10?

    // Вычисление выражения
    double numerator = 2 * cos(x - x * z / 6.0);
    double denominator = 0.5 + pow(sin(y), 3);
    double fraction = numerator / denominator;
    double bracket = 1 + (pow(x, 2) / (3 - pow(x, 2) / 5.0));

    double t = fraction * bracket;

    // Вывод результатов
    printf("Вычисление величины t\n");
    printf("=====================\n");
    printf("Исходные значения:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
    printf("z = %.2f\n", z);
    printf("\nПромежуточные вычисления:\n");
    printf("Числитель: 2 * cos(x - x*z/6) = %.6f\n", numerator);
    printf("Знаменатель: 0.5 + sin?(y) = %.6f\n", denominator);
    printf("Дробь: %.6f\n", fraction);
    printf("Скобка: 1 + x?/(3 - x?/5) = %.6f\n", bracket);
    printf("\nРезультат:\n");
    printf("t = %.6f\n", t);
    printf("Ожидаемый результат: 0.564846\n");

    // Проверка точности
    double expected = 0.564846;
    double error = fabs(t - expected);
    printf("Погрешность: %.6f\n", error);

    return 0;
}