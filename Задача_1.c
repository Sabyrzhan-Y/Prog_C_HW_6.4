/*  Домашнее задание №4.
Задача 1. Сумма квадратов маленьких чисел
Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.

Данные на входе: Два целых числа по модулю не больше 100
Данные на выходе: Сумма квадратов от первого введенного числа до второго.

Пример №1
Данные на входе: 4 10
Данные на выходе: 371
*/

#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0, i = a;
    if (a <= 100 && b <= 100)
    {
        while (i < b)
        {
            sum = sum + i * i;
            i++;
        }
        printf("%d ", sum = sum + i * i);
    }
    else
        printf("more 100");
    return 0;
}

// Код работает, при условии что a < b
