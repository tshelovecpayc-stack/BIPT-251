#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int n;

    // Ввод размера массива
    printf("Введите размер массива: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Размер массива должен быть положительным числом.\n");
        return 1;
    }

    // Динамическое выделение памяти для массива
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }

    // Ввод элементов массива
    printf("Введите %d элементов массива:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Поиск минимального элемента и его индекса
    int min_index = 0;
    int min_value = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i];
            min_index = i;
        }
    }

    printf("Минимальный элемент: %d (индекс %d)\n", min_value, min_index);

    // Проверка, есть ли три элемента после минимального
    if (min_index + 3 >= n) {
        printf("После минимального элемента недостаточно элементов для вычисления суммы трех соседних.\n");
        free(arr);
        return 1;
    }

    // Вычисление суммы трех соседних элементов после минимального
    int sum = 0;
    printf("Три элемента после минимального: ");
    for (int i = min_index + 1; i <= min_index + 3; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\n");

    printf("Сумма трех соседних элементов после минимального: %d\n", sum);

    // Освобождение памяти
    free(arr);

    return 0;
}
