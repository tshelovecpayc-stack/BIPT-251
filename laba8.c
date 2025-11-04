#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int N;
    double sum = 0.0;

    printf("Введите число N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }

    printf("Сумма 1 + 1/2 + 1/3 + ... + 1/%d = %lf\n", N, sum);

    return 0;

}
