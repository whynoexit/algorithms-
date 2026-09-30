#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {5, 2, 8, 1, 2, 7};

    // =========================
    // sort
    // =========================

    sort(a.begin(), a.end());

    // Теперь:
    // 1 2 2 5 7 8

    // Сортировка в обратном порядке.
    sort(a.begin(), a.end(), greater<int>());

    // =========================
    // reverse
    // =========================

    reverse(a.begin(), a.end());

    // =========================
    // min / max
    // =========================

    cout << min(10, 20) << '\n';
    cout << max(10, 20) << '\n';

    // =========================
    // min_element / max_element
    // =========================

    auto mn = min_element(a.begin(), a.end());
    auto mx = max_element(a.begin(), a.end());

    cout << *mn << '\n';
    cout << *mx << '\n';

    // =========================
    // find
    // =========================

    auto it = find(a.begin(), a.end(), 5);

    if (it != a.end()) {
        cout << "5 found\n";
    }

    // =========================
    // count
    // =========================

    int cnt = count(a.begin(), a.end(), 2);

    cout << cnt << '\n';

    // =========================
    // lower_bound
    // =========================

    // Массив должен быть отсортирован.
    sort(a.begin(), a.end());

    // Первый элемент >= 5.
    auto lb = lower_bound(a.begin(), a.end(), 5);

    if (lb != a.end()) {
        cout << *lb << '\n';
    }

    // =========================
    // upper_bound
    // =========================

    // Первый элемент > 5.
    auto ub = upper_bound(a.begin(), a.end(), 5);

    if (ub != a.end()) {
        cout << *ub << '\n';
    }

    // =========================
    // binary_search
    // =========================

    if (binary_search(a.begin(), a.end(), 5)) {
        cout << "5 exists\n";
    }

    // =========================
    // accumulate
    // =========================

    int sum = accumulate(a.begin(), a.end(), 0);

    cout << sum << '\n';

    // =========================
    // iota
    // =========================

    vector<int> b(5);

    // Заполняет:
    // 1 2 3 4 5
    iota(b.begin(), b.end(), 1);

    // =========================
    // next_permutation
    // =========================

    sort(b.begin(), b.end());

    // Перебираем все перестановки.
    do {
        for (int x : b) {
            cout << x << ' ';
        }

        cout << '\n';

    } while (next_permutation(b.begin(), b.end()));

    return 0;
}