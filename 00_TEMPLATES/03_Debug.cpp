#include <bits/stdc++.h>
using namespace std;

// Просто вывести одну переменную.
template <typename T>
void debug(const T& x) {
    cerr << x << '\n';
}

// Вывести весь vector.
template <typename T>
void debug(const vector<T>& a) {
    for (const T& x : a) {
        cerr << x << ' ';
    }

    cerr << '\n';
}

int main() {
    int x = 42;

    vector<int> a = {1, 2, 3, 4, 5};

    debug(x);
    debug(a);

    return 0;
}

// Для отладки используем cerr, а не cout.
//
// Почему?
//
// cout — это наш настоящий ответ.
// cerr — отдельный поток для сообщений об ошибках
// и отладочной информации.
//
// Поэтому во время разработки можно писать:
//
// debug(a);
//
// и при этом не смешивать отладочный вывод
// с ответом программы.