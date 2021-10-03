#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int m, n, d;
    cin >> m;
    cin >> n;
    d = 0;
    if (m == 1)
        d = n;
    if (m == 2)
        d = 31 + n;
    if (m == 3)
        d = 59 + n;
    if (m == 4)
        d = 90 + n;
    if (m == 5)
        d = 120 + n;
    if (m == 6)
        d = 151 + n;
    if (m == 7)
        d = 181 + n;
    if (m == 8)
        d = 212 + n;
    if (m == 9)
        d = 243 + n;
    if (m == 10)
        d = 273 + n;
    if (m == 11)
        d = 304 + n;
    if (m == 12)
        d = 334 + n;
    if (m < 1 || m > 12)
        cout << "ошибка ввода данных";
    else
        if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (n < 1 || n > 31))
            cout << "ошибка ввода данных";
        else
            if ((m == 4 || m == 6 || m == 9 || m == 11) && (n < 1 || n > 30))
                cout << "ошибка ввода данных";
            else
                if ((m == 2) && (n < 1 || n > 28))
                    cout << "ошибка ввода данных";
                else
                    cout << 365 - d;

    return(0);
}