#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {10, 20, 30, 40, 50};

    // begin() указывает на первый элемент.
    auto it = a.begin();

    // end() указывает НЕ на последний элемент,
    // а сразу после него.
    auto finish = a.end();

    // Разыменование итератора.
    cout << *it << '\n';

    // Переходим к следующему элементу.
    ++it;

    cout << *it << '\n';

    // Проход с помощью итератора.
    for (auto it = a.begin(); it != a.end(); ++it) {
        cout << *it << ' ';
    }

    cout << '\n';

    // Обратные итераторы.
    for (auto it = a.rbegin(); it != a.rend(); ++it) {
        cout << *it << ' ';
    }

    cout << '\n';

    // Итераторы особенно часто встречаются
    // при работе со стандартными алгоритмами.
    sort(a.begin(), a.end());

    return 0;
}