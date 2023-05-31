#include <stdio.h>

int main() {
    int num1, num2;
    printf("Введите первое число: ");
    scanf("%d", &num1);
    printf("Введите второе число: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int diff = num1 - num2;

    printf("Сумма: %d\n", sum);
    printf("Разность: %d\n", diff);

    return 0;
}
