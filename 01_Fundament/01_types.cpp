#include <bits/stdc++.h>
using namespace std;

int main() {
    // Целые числа.
    // int обычно используем для обычных индексов и небольших значений.
    int a = 10;

    // long long нужен, когда int может не вместить число.
    // Например, если значения могут быть порядка 10^18.
    long long b = 1000000000000LL;

    // unsigned — только неотрицательные числа.
    // В олимпиадах используем не так часто.
    unsigned int c = 20;

    // Числа с плавающей точкой.
    double d = 3.14;
    long double e = 3.141592653589793238L;

    // Один символ.
    char ch = 'A';

    // true или false.
    bool ok = true;

    // Строка.
    string s = "Hello";

    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';
    cout << d << '\n';
    cout << e << '\n';
    cout << ch << '\n';
    cout << ok << '\n';
    cout << s << '\n';

    return 0;
}