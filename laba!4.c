#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

    int main() {
        setlocale(LC_ALL, "Russian");
        int A, B, C;

        printf("Введите A, B, C: ");
        scanf("%d %d %d", &A, &B, &C);

        if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0) {
            printf("Портал открыт!\n");
        }
        else {
            printf("Портал закрыт!\n");
        }

        return 0;
    }
