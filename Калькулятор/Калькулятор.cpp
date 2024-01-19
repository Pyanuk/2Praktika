#include <iostream>
#include <Windows.h>

using namespace std;

void Addition() {
    cout << "Введите первое число: ";
    int a1,b2;
    cin >> a1;
    cout << "Введите первое число: ";
    cin >> b2;
    int result = a1 + b2;
    cout << "Результат: " << result << endl;
}

void Subtraction() {
    cout << "Введите первое число: ";
    int a1, b2;
    cin >> a1;
    cout << "Введите первое число: ";
    cin >> b2;
    int result = a1 - b2;
    cout << "Результат: " << result << endl;
}

void Multiplication() {
    cout << "Введите первое число: ";
    int a1, b2;
    cin >> a1;
    cout << "Введите первое число: ";
    cin >> b2;
    int result = a1 * b2;
    cout << "Результат: " << result << endl;
}

void Division() {
    cout << "Введите первое число: ";
    int a1, b2;
    cin >> a1;
    cout << "Введите первое число: ";
    cin >> b2;
    int result = a1 / b2;
    cout << "Результат: " << result << endl;
    
}

void Power() {
    cout << "Введите число и степень через пробел: ";
    double a;
    int power;
    cin >> a >> power;

    double result = 1;
    for (int i = 0; i < power; i++) {
        result *= a;
    }

    cout << "Результат: " << result << endl;
}

void SquareRoot() {
    cout << "Введите число: ";
    double a;
    cin >> a;
    cout << sqrt(a) << endl;
}

void Percentage() {
    cout << "Введите число: ";
    double a;
    cin >> a;
    double result = a * 0.01;
    cout << "Результат: " << result << endl;
}

void Factorial() {
    cout << "Введите число: ";
    int a;
    cin >> a;
    int result = 1;

    for (int i = 1; i <= a; i++) {
        result *= i;
    }

    cout << "Результат: " << result << endl;
}

int main() {
    int choice;

    do {
        setlocale(LC_ALL, "RUS");
        cout << "Салам Алейкум \n";
        cout << "Выберите операцию (введите номер) по братски:\n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n" ;
        cout << "3. Умножение\n";
        cout << "4. Деление\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Квадратный корень\n";
        cout << "7. Найти 1% от числа\n";
        cout << "8. Найти факториал числа\n";
        cout << "9. Auf Wiedersehen\n";


        cin >> choice;

        switch (choice) {
        case 1:
            Addition();
            break;
        case 2:
            Subtraction();
            break;
        case 3:
            Multiplication();
            break;
        case 4:
            Division();
            break;
        case 5:
            Power();
            break;
        case 6:
            SquareRoot();
            break;
        case 7:
            Percentage();
            break;
        case 8:
            Factorial();
            break;
        case 9:
            cout << "Выход из программы" ;
            break;
        default:
            cout << "Неверный выбор операции. Попробуйте снова.";
            break;
        }

        cout << endl;
    } while (choice != 9);

    return 0;
}
