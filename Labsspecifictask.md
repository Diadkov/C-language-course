# Температурні Перетворення та Робота з Файлами

## Опис Завдання

1. **Конвертація Температури**
   - Необхідно створити програму, яка конвертує значення температури з Цельсія у Фаренгейти. Формула для перетворення виглядає так:
     \[
     F = (C \times \frac{9}{5}) + 32
     \]
     Де:
     - C — температура в градусах Цельсія.
     - F — температура в градусах Фаренгейта.

2. **Структура**
   - Створити структуру для збереження двох значень типу `float`:
     - `mem1`: Температура у градусах Цельсія.
     - `mem2`: Температура у градусах Фаренгейта.

3. **Робота з Файлами**
   - **Запис:** Записати два стовпці (значення `mem1` і `mem2`) у файл.
   - **Зчитування:** Зчитати всі дані з файлу у структуру або масив.

4. **Бінарний Пошук**
   - **Зчитування Даних:** Після зчитування даних із файлу, зберегти їх у масив для подальшого пошуку.
   - **Алгоритм:** Реалізувати бінарний пошук по відсортованому масиву за значенням температури у Фаренгейтах.

## Підхід до Вирішення

1. **Створення Структури**
   - Створіть структуру для зберігання двох температурних значень:
     - `mem1` для температури у Цельсіях.
     - `mem2` для температури у Фаренгейтах.

2. **Конвертація Температури**
   - Напишіть функцію, яка приймає значення температури в градусах Цельсія і повертає її еквівалент у Фаренгейтах за допомогою формули:
     \[
     F = (C \times \frac{9}{5}) + 32
     \]

3. **Запис Даних у Файл**
   - Реалізуйте функцію, яка записує значення температури (як Цельсій, так і Фаренгейт) з структури у файл у вигляді двох стовпців.

4. **Зчитування Даних із Файлу**
   - Зчитайте дані із файлу у масив або вектор. Кожен елемент масиву має бути структурою, що містить два значення температури.

5. **Бінарний Пошук**
   - Використовуйте стандартний алгоритм бінарного пошуку для знаходження потрібного значення температури у Фаренгейтах. Попередньо переконайтеся, що масив відсортований за значенням температур у Фаренгейтах.

## Структура Файлів

- `main.cpp`: Основний файл програми, який містить функції для конвертації температур, роботи з файлами та реалізацію бінарного пошуку.
- `temperature_data.txt`: Файл, у який буде записано дані про температури.
- `README.md`: Документ із описом завдання та інструкціями.

## Покрокова Інструкція

1. Реалізуйте структуру для зберігання значень температур у Цельсії та Фаренгейтах.
2. Напишіть функцію для конвертації температури з Цельсія у Фаренгейти.
3. Створіть функції для запису даних у файл та зчитування з файлу.
4. Відсортуйте масив структур за значенням температур у Фаренгейтах.
5. Реалізуйте алгоритм бінарного пошуку для знаходження значення температури у Фаренгейтах.

## Ліцензія

Цей проєкт є відкритим і доступний для модифікації та розповсюдження під ліцензією MIT.