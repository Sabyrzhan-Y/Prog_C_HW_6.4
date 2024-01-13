/*  Домашнее задание №4.
Задача 5. Все счастливые числа
Ввести натуральное число и напечатать все числа от 10 до введенного числа -
у которых сумма цифр равна произведению цифр

Данные на входе: Одно натуральное число большее 10
Данные на выходе: Числа у которых сумма цифр равна произведению цифр 
через пробел в порядке возрастания. Не превосходящие введенное число.

Пример №1
Данные на входе: 200
Данные на выходе: 22 123 132
*/

#include <stdio.h>

int main(void)
{
    int Input_number, index, sum, multiplication;
    scanf("%d", &Input_number);
    if (Input_number > 10)
    {
        for (index = 10; index <= Input_number; index++)
        {
            int x, last_number;
            sum = 0;
            multiplication = 1;
            x = index;
            do
            {
                last_number = x % 10;
                sum = sum + last_number;
                multiplication = multiplication * last_number;
                x /= 10;
            } while (x > 0);
        if (sum == multiplication)
            printf("%d ", index);
        }
    }
    else
        printf("less than 10");
    return 0;
}
