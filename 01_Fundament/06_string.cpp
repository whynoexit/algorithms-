#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abcdef";

    // Длина строки.
    cout << s.size() << '\n';

    // Доступ к отдельному символу.
    cout << s[0] << '\n';

    // Изменение символа.
    s[0] = 'A';

    // Добавить символ в конец.
    s.push_back('!');

    // Удалить последний символ.
    s.pop_back();

    // Получить часть строки.
    // substr(pos, len)
    string part = s.substr(1, 3);

    cout << part << '\n';

    // Найти подстроку.
    size_t pos = s.find("cd");

    if (pos != string::npos) {
        cout << "found at " << pos << '\n';
    }

    // Удалить несколько символов.
    // erase(позиция, количество)
    s.erase(1, 2);

    cout << s << '\n';

    // cin >> s читает только до первого пробела.
    string word;
    cin >> word;

    // getline() читает всю строку вместе с пробелами.
    cin.ignore();

    string line;
    getline(cin, line);

    cout << word << '\n';
    cout << line << '\n';

    return 0;
}