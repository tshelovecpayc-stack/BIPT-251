#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int powerA, powerB, powerC;  // уровни силы героев
    int canActivate;             // флаг активации способности

    printf("АКТИВАЦИЯ СПОСОБНОСТИ 'ТРОЙНОЙ УДАР'\n\n");

    // Ввод уровней силы героев
    printf("Введите уровень силы героя A: ");
    scanf("%d", &powerA);

    printf("Введите уровень силы героя B: ");
    scanf("%d", &powerB);

    printf("Введите уровень силы героя C: ");
    scanf("%d", &powerC);

    // Проверка условия активации
    canActivate = (powerA % 3 == 0) && (powerB % 3 == 0) && (powerC % 3 == 0);

    // Вывод результатов
    printf("\nРЕЗУЛЬТАТ ПРОВЕРКИ\n");
    printf("Герой A: уровень силы = %d, кратен 3: %s\n",
        powerA, (powerA % 3 == 0) ? "ДА" : "НЕТ");
    printf("Герой B: уровень силы = %d, кратен 3: %s\n",
        powerB, (powerB % 3 == 0) ? "ДА" : "НЕТ");
    printf("Герой C: уровень силы = %d, кратен 3: %s\n",
        powerC, (powerC % 3 == 0) ? "ДА" : "НЕТ");

    if (canActivate) {
        printf("\nСПОСОБНОСТЬ АКТИВИРОВАНА! Тройной удар готов к использованию!\n");
    }
    else {
        printf("\nСПОСОБНОСТЬ НЕДОСТУПНА! Не все герои удовлетворяют условию.\n");
    }

    return 0;
}