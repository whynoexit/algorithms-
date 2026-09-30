#include <bits/stdc++.h>
using namespace std;

int main() {
    // pair хранит ровно два значения.
    pair<int, string> student = {10, "Alex"};

    // Первый элемент.
    cout << student.first << '\n';

    // Второй элемент.
    cout << student.second << '\n';

    // pair очень часто используется для хранения
    // двух связанных значений.
    pair<int, int> point = {3, 5};

    cout << point.first << ' ' << point.second << '\n';

    // Например, можно хранить координаты.
    // Или {значение, индекс}.
    pair<int, int> element = {100, 7};

    // tuple позволяет хранить больше двух значений.
    tuple<int, string, double> data = {10, "hello", 3.14};

    // Получаем элементы через get.
    cout << get<0>(data) << '\n';
    cout << get<1>(data) << '\n';
    cout << get<2>(data) << '\n';

    // tie позволяет распаковать несколько значений.
    int x;
    string s;
    double d;

    tie(x, s, d) = data;

    cout << x << ' ' << s << ' ' << d << '\n';

    return 0;
}