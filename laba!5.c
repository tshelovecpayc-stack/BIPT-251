#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    // Константы для тестовых значений
    const double TEST1_X = -3.0;
    const double TEST1_Y = 2.7 * 1e-5;  // 2.7 * 10^-5
    const double TEST2_X = 2.1 * 1e-3;  // 2.1 * 10^-3
    const double TEST2_Y = 10.0;

    double x, y, result;

    printf("=== ВЫЧИСЛЕНИЕ ФУНКЦИИ F(x,y) ===\n\n");

    // Ввод значений x и y
    printf("Введите x: ");
    scanf("%lf", &x);
    printf("Введите y: ");
    scanf("%lf", &y);

    // Вычисление функции F(x,y) = (cos^2(y) + 2x) / (e + ln(sin^2(x) + 7.4))
    double numerator = pow(cos(y), 2) + 2 * x;
    double denominator = exp(1) + log(pow(sin(x), 2) + 7.4);
    result = numerator / denominator;

    // Вывод результата для введенных значений
    printf("\nF(%.2f, %.2f) = %.6f\n", x, y, result);

    // Вывод тестовых значений
    printf("\n--- ТЕСТОВЫЕ ЗНАЧЕНИЯ ---\n");

    // Тест 1: F(-3, 2.7e-5)
    double num1 = pow(cos(TEST1_Y), 2) + 2 * TEST1_X;
    double den1 = exp(1) + log(pow(sin(TEST1_X), 2) + 7.4);
    double test1 = num1 / den1;
    printf("F(%.0f, %.1e) = %.6f\n", TEST1_X, TEST1_Y, test1);

    // Тест 2: F(2.1e-3, 10)
    double num2 = pow(cos(TEST2_Y), 2) + 2 * TEST2_X;
    double den2 = exp(1) + log(pow(sin(TEST2_X), 2) + 7.4);
    double test2 = num2 / den2;
    printf("F(%.1e, %.0f) = %.6f\n", TEST2_X, TEST2_Y, test2);

    return 0;
}

