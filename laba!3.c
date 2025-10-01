#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    setlocale(LC_ALL, "Russian");

    double edgeLength;    // длина ребра куба
    double volume;        // объем куба
    double surfaceArea;   // площадь боковой поверхности

    // Ввод длины ребра
    printf("Введите длину ребра куба: ");
    scanf("%lf", &edgeLength);

    // Проверка корректности ввода
    if (edgeLength <= 0) {
        printf("Ошибка: длина ребра должна быть положительным числом!\n");
        return 1;
    }

    // Вычисление объема куба
    volume = edgeLength * edgeLength * edgeLength;

    // Вычисление площади боковой поверхности (S = 6 * a²)
    surfaceArea = 6 * edgeLength * edgeLength;

    // Вывод результатов
    printf("\n--- Результаты вычислений ---\n");
    printf("Длина ребра куба: %.2lf\n", edgeLength);
    printf("Объем куба: %.2lf\n", volume);
    printf("Площадь боковой поверхности: %.2lf\n", surfaceArea);

    return 0;
}