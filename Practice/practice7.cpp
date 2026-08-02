#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:-";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        for (; j <= i; j++)
        {
            cout << n - j;
        }
        for (int k = 0; k < 2 * (n - i) - 2; k++)
            cout << n - j + 1;
        for (int k = n - j + 2; k <= n; k++)
            cout << k;
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int j = n;
        for (; j > 1 + i; j--)
        {
            cout << j;
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << j + 1;
        }
        for (int k = j + 1; k <= 5; k++)
        {
            cout << k;
        }
        cout << endl;
    }

    return 0;
}