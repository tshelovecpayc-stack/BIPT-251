#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

// Функция для вычисления площади трапеции
float area_trapezoid(float a, float b, float h) {
    return (a + b) * h / 2;
}

// Функция для вывода определения фигуры
void print_definition() {
    printf("Неравнобедренная трапеция - это четырехугольник с двумя параллельными сторонами (основаниями)");
    printf(" и двумя непараллельными сторонами разной длины.\n");
}

// Функция для рисования трапеции
void draw_trapezoid(int top, int bottom, char s) {
    int h = bottom / 2; // Высота для визуализации
    int sp = (bottom - top) / 2;

    printf("\nРисунок трапеции:\n");

    // Верхнее основание
    for (int i = 0; i < top; i++) {
        printf("%c", s);
    }
    printf("\n");

    // Боковые стороны
    for (int i = 1; i < h - 1; i++) {
        for (int j = 0; j < sp - i; j++) {
            printf(" ");
        }
        printf("%c", s);

        for (int j = 0; j < top + 2 * i - 1; j++) {
            printf(" ");
        }
        printf("%c\n", s);
    }

    // Нижнее основание
    for (int i = 0; i < bottom; i++) {
        printf("%c", s);
    }
    printf("\n");
}

// Функция для получения параметров трапеции
void get_trapezoid_params(float* a, float* b, float* h) {
    printf("Введите длину верхнего основания: ");
    scanf("%f", a);
    printf("Введите длину нижнего основания: ");
    scanf("%f", b);
    printf("Введите высоту трапеции: ");
    scanf("%f", h);
}

// Функция для сравнения двух трапеций по площади
float compare_trapezoid(float a1, float b1, float h1, float a2, float b2, float h2) {
    float area1 = area_trapezoid(a1, b1, h1);
    float area2 = area_trapezoid(a2, b2, h2);
    return area1 - area2;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    float top_base, bottom_base, height;
    char symbol = '*';

    printf("=== ПРОГРАММА ДЛЯ РАБОТЫ С НЕРАВНОБЕДРЕННОЙ ТРАПЕЦИЕЙ ===\n");

    // Получаем параметры трапеции
    get_trapezoid_params(&top_base, &bottom_base, &height);

    do {
        printf("\n=== МЕНЮ ===\n");
        printf("1. Рассчитать площадь\n");
        printf("2. Вывести определение фигуры\n");
        printf("3. Нарисовать фигуру\n");
        printf("4. Сравнить с другой трапецией\n");
        printf("5. Изменить символ для рисования\n");
        printf("0. Выход\n");
        printf("Выберите операцию: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            float area = area_trapezoid(top_base, bottom_base, height);
            printf("Площадь трапеции: %.2f\n", area);
            break;
        }
        case 2:
            print_definition();
            break;
        case 3:
            draw_trapezoid((int)top_base, (int)bottom_base, symbol);
            break;
        case 4: {
            float top2, bottom2, height2;
            printf("Введите параметры второй трапеции:\n");
            get_trapezoid_params(&top2, &bottom2, &height2);

            float difference = compare_trapezoid(top_base, bottom_base, height, top2, bottom2, height2);

            if (difference > 0) {
                printf("Первая трапеция больше второй на %.2f\n", difference);
            }
            else if (difference < 0) {
                printf("Вторая трапеция больше первой на %.2f\n", -difference);
            }
            else {
                printf("Трапеции равны по площади\n");
            }
            break;
        }
        case 5:
            printf("Введите символ для рисования: ");
            scanf(" %c", &symbol);
            printf("Символ изменен на: %c\n", symbol);
            break;
        case 0:
            printf("Выход из программы.\n");
            break;
        default:
            printf("Неверный выбор! Попробуйте снова.\n");
        }
    } while (choice != 0);

    return 0;
}
