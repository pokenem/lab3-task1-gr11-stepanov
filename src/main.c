#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

// Функция для сортировки массива чисел по сумме цифр
void sortByDigitSum(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (compare(arr[j], arr[j + 1]) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: %s <array_size>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    if (n <= 0) {
        printf("Invalid array size\n");
        return 1;
    }

    int arr[n];

    srand(time(NULL));

    printf("Исходный массив:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000;
        printf("%d ", arr[i]);
    }
    printf("\n");

    sortByDigitSum(arr, n);

    printf("Отсортированный массив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}