#include <bits/stdc++.h>
using namespace std;

int main() {
    // Ускоряем cin и cout.
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << n << '\n';

    return 0;
}

// ios::sync_with_stdio(false);
// Отключаем синхронизацию потоков C++ с потоками C.
// В задачах с большим количеством ввода это может быть полезно.

// cin.tie(nullptr);
// По умолчанию cin связан с cout.
// Эта строка убирает эту связь и немного ускоряет ввод.