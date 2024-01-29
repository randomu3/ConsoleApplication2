#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    unsigned int a, b;
    cout << "Введите два числа." << endl;
    cout << "Первое число: "; cin >> a;
    cout << "Второе число: "; cin >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "После обмена:" << endl;
    cout << "Первое число: " << a << endl;
    cout << "Второе число: " << b << endl;
    return 0;
}
