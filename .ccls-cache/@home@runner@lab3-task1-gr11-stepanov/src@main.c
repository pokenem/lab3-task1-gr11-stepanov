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

int main() {
    int n;
    printf("Введите размерность массива: ");
    scanf("%d", &n);

    int arr[n];
    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sortByDigitSum(arr, n);

    printf("Отсортированный массив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}