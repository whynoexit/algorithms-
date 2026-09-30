#include <bits/stdc++.h>
using namespace std;

// Функция может принимать параметры и возвращать результат.
int sum(int a, int b) {
    return a + b;
}

// void означает, что функция ничего не возвращает.
void print_number(int x) {
    cout << x << '\n';
}

// Если передаём большой объект, например vector,
// лучше передавать его по ссылке.
// const означает, что внутри функции мы его не изменяем.
int get_sum(const vector<int>& a) {
    int result = 0;

    for (int x : a) {
        result += x;
    }

    return result;
}

// Если функцию нужно использовать до её определения,
// можно сначала написать её объявление.
int square(int x);

int main() {
    cout << sum(2, 3) << '\n';

    print_number(42);

    vector<int> a = {1, 2, 3, 4, 5};

    cout << get_sum(a) << '\n';

    cout << square(5) << '\n';

    return 0;
}

int square(int x) {
    return x * x;
}