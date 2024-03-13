/* hello.c */
#include <stdio.h>

// Функция для подсчета суммы цифр числа
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    printf("Введите число: ");
    scanf("%d", &n);
    printf("Сумма цифр: ");
    printf("%d", sumOfDigits(n));
    return 0;
}