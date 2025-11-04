#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <math.h>
        
#include <stdio.h>
int main() {
    setlocale(LC_ALL, "Russian");
    double x, y;

    printf("Введите координату x: ");
    scanf("%lf", &x);

    printf("Введите координату y: ");
    scanf("%lf", &y);

    // Проверка принадлежности трапеции:
    // x >= 0, 1 <= y <= 7, y <= -0.3x + 7
    if (x >= 0 && y >= 1 && y <= 7 && y <= -0.3 * x + 7) {
    printf("Точка принадлежит закрашенной области.\n");
    }
    else {
    printf("Точка не принадлежит закрашенной области.\n");
    }
    return 0;
        }
