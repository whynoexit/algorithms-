#include <bits/stdc++.h>
using namespace std;

int main() {
    // Это наш тест.
    // Здесь можно быстро менять входные данные
    // и проверять программу.
    string input = R"(
5
10 20 30 40 50
)";

    // Создаём поток, который читает данные
    // не из клавиатуры, а из строки input.
    istringstream in(input);

    int n;
    in >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        in >> a[i];
    }

    // Проверяем, что получили.
    for (int x : a) {
        cout << x << ' ';
    }

    cout << '\n';

    return 0;
}