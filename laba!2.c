#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    double billPerPerson;

    printf("Введите счет на каждого человека (руб.): ");
    scanf_s("%lf", &billPerPerson);

    double totalBill = billPerPerson * 4;
    double tipAmount = totalBill * 0.15;

    printf("\n--- Результат расчета ---\n");
    printf("Счет на одного человека: %.2lf руб.\n", billPerPerson);
    printf("Общий счет (4 человека): %.2lf руб.\n", totalBill);
    printf("Чаевые (15%% от счета): %.2lf руб.\n", tipAmount);

    return 0;
}
