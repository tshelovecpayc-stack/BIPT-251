#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    double billPerPerson;

    printf("������� ���� �� ������� �������� (���.): ");
    scanf_s("%lf", &billPerPerson);

    double totalBill = billPerPerson * 4;
    double tipAmount = totalBill * 0.15;

    printf("\n--- ��������� ������� ---\n");
    printf("���� �� ������ ��������: %.2lf ���.\n", billPerPerson);
    printf("����� ���� (4 ��������): %.2lf ���.\n", totalBill);
    printf("������ (15%% �� �����): %.2lf ���.\n", tipAmount);

    return 0;
}