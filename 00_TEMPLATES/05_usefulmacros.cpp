#include <bits/stdc++.h>
using namespace std;

// Передать весь контейнер в алгоритм:
// sort(all(a));
#define all(x) (x).begin(), (x).end()

// Получить размер контейнера как int.
#define sz(x) ((int)(x).size())

int main() {
    vector<int> a = {5, 2, 4, 1, 3};

    sort(all(a));

    cout << "Размер: " << sz(a) << '\n';

    return 0;
}

// all(x)
//
// Вместо:
//
// sort(a.begin(), a.end());
//
// можно написать:
//
// sort(all(a));
//
// Это просто сокращение, чтобы меньше писать
// на соревновании.


// sz(x)
//
// Вместо:
//
// (int)a.size()
//
// можно написать:
//
// sz(a)
//
// Приведение к int здесь нужно потому,
// что size() возвращает беззнаковый тип.