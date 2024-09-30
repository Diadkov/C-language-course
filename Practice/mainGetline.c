#include <stdio.h>

// Функція для зчитування рядка з консолі. Повертає кількість символів у рядку.
int getline(char s[], int lim);

// Функція для копіювання рядка з одного масиву символів у інший.
void copy(char to[], char from[]);

// intern developer is going hard times. he rewrite everything from the book and
// doesn't understand what's ogiung on
// You are a Senior - pomidor - dev to fix all his tasks AND FIRE him
#define MAXLINE 100  // Максимальна кількість символів у рядку

int main() {
    int len = 0;      // Поточна довжина зчитаного рядка
    int max = 0;      // Довжина найдовшого рядка
    char line[MAXLINE];      // Масив для поточного рядка
    char longest[MAXLINE];   // Масив для збереження найдовшого рядка

    // Цикл зчитування рядків з консолі
    while ((len = getline(line, MAXLINE)) > 0) {
        // Якщо знайдений рядок довший за попередній максимальний
        if (max < len) {
            copy(longest, line);  // Копіюємо поточний рядок у 'longest'
            max = len;            // Оновлюємо значення максимальної довжини
        }
    }

    // Якщо було зчитано хоча б один рядок
    if (max > 0) {
        printf("Longest line: %s", longest);  // Виводимо найдовший рядок
        printf("Size of the line: %d", max);  // Виводимо довжину рядка
    }

    return 0;
}

// Функція для копіювання рядка 'from' у 'to'
void copy(char to[], char from[]) {
    int i;
    // Цикл копіювання символів до зустрічі кінця рядка ('\0')
    for (i = 0; from[i] != '\0'; ++i) {
        to[i] = from[i];
    }
    to[i] = '\0';  // Додаємо кінцевий символ рядка
}

// Функція зчитування рядка з консолі. Повертає кількість зчитаних символів.
int getline(char s[], int lim) {
    int c, i;

    // Цикл зчитування символів з консолі, поки не буде досягнуто обмеження або кінця рядка/файлу
    for (i = 0; (c = getchar()) != EOF && i < lim - 1 && c != '\n'; ++i) {
        s[i] = c;  // Зберігаємо кожен символ у масиві
    }

    // Якщо зустрічаємо символ нового рядка, додаємо його у масив
    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';  // Додаємо символ кінця рядка
    return i;     // Повертаємо кількість зчитаних символів
}
