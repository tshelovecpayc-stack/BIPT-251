#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
   
int main() {
    setlocale(LC_ALL, "Russian");
    double slad;    // траты на сладости в неделю
    double vse;     // все карманные деньги в неделю
    double ost;     // остаток после сладостей
    double nak;     // накопления в неделю
    double god;     // накопления за год
    
    // Ввод расходов на сладости
    printf("Сколько Юра тратит на сладости в неделю? ");
    scanf("%lf", &slad);
    
    // Проверка
    if (slad <= 0) {
        printf("Ошибка! Сумма должна быть больше нуля.\n");
        return 1;
    }
    
    // Расчеты
    vse = slad * 4;        // сладости = 1/4 от всех денег
    ost = vse - slad;      // осталось после сладостей
    nak = ost / 3;         // откладывает 1/3 от остатка
    god = nak * 52;        // умножаем на 52 недели
    
    // Вывод результатов
    printf("\n--- Результат ---\n");
    printf("Всего денег в неделю: %.2f руб\n", vse);
    printf("Тратит на сладости: %.2f руб\n", slad);
    printf("Остается после сладостей: %.2f руб\n", ost);
    printf("Откладывает в неделю: %.2f руб\n", nak);
    printf("Накопит за год: %.2f руб\n", god);
    
    return 0;
}
