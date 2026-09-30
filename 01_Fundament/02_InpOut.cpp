#include <bits/stdc++.h>
using namespace std;

int main() {
    // Ускоряем работу cin и cout.
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Читаем одно число.
    int n;
    cin >> n;

    // Читаем несколько чисел.
    int a, b;
    cin >> a >> b;

    // Читаем строку без пробелов.
    string s;
    cin >> s;

    // Если строка может содержать пробелы,
    // используем getline().
    string line;
    cin.ignore();
    getline(cin, line);

    cout << n << '\n';
    cout << a << ' ' << b << '\n';
    cout << s << '\n';
    cout << line << '\n';

    // '\n' обычно удобнее endl.
    // endl ещё и принудительно очищает буфер вывода,
    // что нам в олимпиадах обычно не нужно.

    return 0;
}