#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    double billPerPerson;

    printf("¬ведите счет на каждого человека (руб.): ");
    scanf_s("%lf", &billPerPerson);

    double totalBill = billPerPerson * 4;
    double tipAmount = totalBill * 0.15;

    printf("\n--- –езультат расчета ---\n");
    printf("—чет на одного человека: %.2lf руб.\n", billPerPerson);
    printf("ќбщий счет (4 человека): %.2lf руб.\n", totalBill);
    printf("„аевые (15%% от счета): %.2lf руб.\n", tipAmount);

    return 0;
}