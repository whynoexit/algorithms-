#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 10;

    // Обычное условие.
    if (x > 0) {
        cout << "positive\n";
    } else if (x == 0) {
        cout << "zero\n";
    } else {
        cout << "negative\n";
    }

    // Тернарный оператор.
    // Удобен для очень коротких условий.
    int y = (x > 0 ? 1 : -1);

    // for — основной цикл в олимпиадных задачах.
    for (int i = 0; i < 5; i++) {
        cout << i << ' ';
    }
    cout << '\n';

    // while используем, когда заранее неизвестно,
    // сколько раз придётся повторить действие.
    int n = 5;

    while (n > 0) {
        cout << n << ' ';
        n--;
    }
    cout << '\n';

    // break полностью останавливает цикл.
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }

        cout << i << ' ';
    }
    cout << '\n';

    // continue пропускает текущую итерацию.
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }

        cout << i << ' ';
    }
    cout << '\n';

    return 0;
}