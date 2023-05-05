#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhap n: ";
    cin >> n;
    float sum = 1.0;
    for (int i = 0; i <= n; i++)
    {
        int a = 1;
        for (int j = 0; j <= i; j++)
            a = a * 2 * (j + 1) / (2 * j + 3);
        sum = sum + a;
    }
    cout << "return sum: " << sum << endl;
}