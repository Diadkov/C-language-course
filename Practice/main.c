﻿#include <stdio.h>

// Оголошення перерахункового типу для символу нового рядка
enum ESCAPE { NEW_LINE = '\n' };

int main() {
    const char ZERO = '0';  // Константа для нуля у символах
    char arr[3];           // Масив для зберігання введених чисел
    char c;                // Змінна для зберігання символу вводу
    int i = 0;             // Індекс для масиву
    const int MIN_NUMBER = '0';  // Мінімально допустимий ввід
    const int MAX_NUMBER = '9';  // Максимально допустимий ввід
    int is_Main = 1;              // Прапорець для перевірки дійсності вводу

    printf("Enter 3 numbers (0-9):\n");

    // Цикл для отримання вводу до нового рядка або заповнення масиву
    while ((c = getchar()) != NEW_LINE && i < 3) {
        // Перевірка, чи ввід в межах допустимих значень
        if (c >= MIN_NUMBER && c <= MAX_NUMBER) {
            arr[i] = c - ZERO;  // Перетворення символу на його числове значення
            i++;                // Збільшення індексу масиву
        }
        else {
            is_Main = 0;  // Неправильний ввід
            break;        // Вихід з циклу при помилці
        }
    }

    // Перевірка, чи ввели коректний ввід і чи достатня кількість чисел
    if (!is_Main || i != 3) {
        printf("Invalid input\n");
        return -1;  // Завершення програми при помилці
    }

    // Перевірка умови a < b > c
    if ((arr[0] < arr[1]) && (arr[1] > arr[2])) {
        printf("a < b > c - satisfied\n");
    }
    else {
        printf("a < b > c - not satisfied\n");
    }

    return 0;  // Успішне завершення програми
}
