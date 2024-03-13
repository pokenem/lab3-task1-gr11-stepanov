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

// Функция для сравнения двух чисел по сумме цифр
int compare(int num1, int num2) {
    int sum1 = sumOfDigits(num1);
    int sum2 = sumOfDigits(num2);
    return sum1 - sum2;
}

// Функция для обмена двух элементов массива
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    printf("Введите число: ");
    scanf("%d", &n);
    printf("Сумма цифр: ");
    printf("%d", sumOfDigits(n));
    return 0;
}