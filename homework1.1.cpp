#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int i;
    cin >> i;
    if (i / 100 > 0 && i / 1000 == 0)
        cout << "верно";
    else
        cout << "не верно";
    return(0);
}
