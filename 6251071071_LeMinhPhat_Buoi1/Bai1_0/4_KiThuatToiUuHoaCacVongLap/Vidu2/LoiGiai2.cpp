#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhap n: ";
    cin >> n;
    float sum = 1.0;
    int a = 1;
    for (int i = 0; i <= n; i++)
    {
        a = a * 2 * (i + 1) / (2 * i + 3);
        sum = +a;
    }
    cout << "result: " << sum << endl;
}