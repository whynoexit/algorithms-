#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// Проверка: число чётное?
bool is_even(ll x) {
    return x % 2 == 0;
}

// Проверка: число нечётное?
bool is_odd(ll x) {
    return x % 2 != 0;
}

// Квадрат числа.
template <typename T>
T sq(T x) {
    return x * x;
}

// Максимум из трёх чисел.
template <typename T>
T max3(T a, T b, T c) {
    return max(a, max(b, c));
}

// Минимум из трёх чисел.
template <typename T>
T min3(T a, T b, T c) {
    return min(a, min(b, c));
}
