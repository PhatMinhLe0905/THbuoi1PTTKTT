#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 60000;
int n, k, a[MAX + 5];

void reverseArray(int l, int r)
{
    while (l < r)
    {
        swap(a[l], a[r]);
        l++;
        r--;
    }
}

int main()
{
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    // Đảo ngược từng phân đoạn của dãy
    reverseArray(1, k);
    reverseArray(k + 1, n);

    // Đảo ngược toàn bộ dãy
    reverseArray(1, n);

    // In ra dãy kết quả
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}