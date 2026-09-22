#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main() {
    // Налаштування виводу українських літер у консолі
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Введення початкових даних (кут alpha у радіанах)
    double alpha;
    cout << "Введіть значення alpha (в радіанах): ";
    cin >> alpha;

    // Обчислення z1 за першою формулою
    double z1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);
    // Обчислення z2 за другою формулою
    const double PI = acos(-1.0); // Точне значення числа PI
    double z2 = 2 * sqrt(2) * cos(alpha) * sin(PI / 4.0 + 2 * alpha);

    // Виведення результатів
    cout << "\nРезультати обчислень:" << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;
}
