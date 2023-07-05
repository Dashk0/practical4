#include <stdio.h>

// Функція для підрахунку кількості рівних дільників числа n
int countEqualDivisors(int n) {
    int count = 0;  // Лічильник рівних дільників
    for (int m = 1; m <= n; m++) {
        if (n / m == n % m) {  // Перевірка, чи є m рівним дільником числа n
            count++;  // Якщо так, збільшуємо лічильник
        }
    }
    return count;  // Повертаємо кількість рівних дільників
}

int main() {
    int n;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    int result = countEqualDivisors(n);  // Виклик функції для підрахунку рівних дільників
    printf("Кількість рівних дільників числа %d: %d\n", n, result);

    return 0;
}
