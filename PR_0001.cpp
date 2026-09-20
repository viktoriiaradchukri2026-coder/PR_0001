#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>

int main() {
    // Налаштування виводу українських літер у консолі
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Введення початкових даних (кут alpha у радіанах)
    double alpha;
    std::cout << "Введіть значення alpha (в радіанах): ";
    std::cin >> alpha;

    // Обчислення z1 за першою формулою
    double z1 = std::cos(alpha) + std::sin(alpha) + std::cos(3 * alpha) + std::sin(3 * alpha);

    // Обчислення z2 за другою формулою
    const double PI = std::acos(-1.0); // Точне значення числа PI
    double z2 = 2 * std::sqrt(2) * std::cos(alpha) * std::sin(PI / 4.0 + 2 * alpha);

    // Виведення результатів
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "\nРезультати обчислень:" << std::endl;
    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;

    return 0;
}