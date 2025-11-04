#include <stdio.h>
#include <locale.h>

#define GET_SIZE(type) ((char*)(&type + 1) - (char*)(&type))

int main() {
    setlocale(LC_ALL, "Russian");
    // Создаем переменные каждого типа
    char c;
    short int si;
    unsigned short int usi;
    int i;
    unsigned char uc;
    wchar_t wc;
    long long int lli;
    size_t st;
    float f;
    double d;
    signed int si2;

    // Вычисляем размеры
    printf("1) char: %ld байт(а)\n", GET_SIZE(c));
    printf("2) short int: %ld байт(а)\n", GET_SIZE(si));
    printf("3) unsigned short int: %ld байт(а)\n", GET_SIZE(usi));
    printf("4) int: %ld байт(а)\n", GET_SIZE(i));
    printf("5) unsigned char: %ld байт(а)\n", GET_SIZE(uc));
    printf("6) wchar_t: %ld байт(а)\n", GET_SIZE(wc));
    printf("7) long long int: %ld байт(а)\n", GET_SIZE(lli));
    printf("8) size_t: %ld байт(а)\n", GET_SIZE(st));
    printf("9) float: %ld байт(а)\n", GET_SIZE(f));
    printf("10) double: %ld байт(а)\n", GET_SIZE(d));
    printf("11) signed int: %ld байт(а)\n", GET_SIZE(si2));

    return 0;
}
