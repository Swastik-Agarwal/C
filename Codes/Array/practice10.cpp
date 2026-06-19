#include <iostream>
using namespace std;
void sum(int a[], int sz)
{
    int sum = 0;
    for (int i = 0; i < sz; i++)
    {
        sum += a[i];
    }
    cout << "The sum of all the elements in the array = " << sum << endl;
}
void pro(int a[], int sz)
{
    int pro = 1;
    for (int i = 0; i < sz; i++)
    {
        pro *= a[i];
    }
    cout << "The product of all the elements in the array = " << pro << endl;
}
void uni(int x[], int sz)
{
    int a[sz];
    int k = 0;
    cout << "the unique elements in the array are:  " << endl;
    for (int i = 0; i < sz; i++)
    {
        bool unique = true;
        for (int j = 0; j < sz; j++)
        {
            if (i != j && x[i] == x[j])
            {
                unique = false;
                break;
            }
        }
        if (unique)
        {
            a[k] = x[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << a[i] << endl;
    }
}

void inter(int a[], int sz_a, int b[], int sz_b)
{
    cout << "the intersection of both the arrays are:  " << endl;
    int sz = min(sz_a, sz_b);
    int d[sz];
    int k = 0;
    for (int i = 0; i < sz_a; i++)
    {
        for (int j = 0; j < sz_b; j++)
        {
            if (a[i] == b[j])
            {
                bool unique = true;
                for (int m = 0; m < k; m++)
                {
                    if (d[m] == a[i])
                    {
                        unique = false;
                        break;
                    }
                }
                if (unique)
                {
                    d[k] = a[i];
                    k++;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << d[i] << endl;
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 1};
    sum(arr, 6);
    pro(arr, 6);
    int b[9] = {1, 2, 3, 4, 1, 3, 4, 5, 7};
    uni(b, 9);
    inter(arr, 6, b, 9);

    return 0;
}