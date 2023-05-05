#include <iostream>
using namespace std;

// Hàm tính giai thừa
int giaithua(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * giaithua(n - 1);
    }
}

int main()
{
    int n;
    double S = 0;
    double t = 0;

    cout << "Input n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        t += i;
        S += t / giaithua(i);
    }

    cout << "The Sum of the result S = " << S << endl;

    return 0;
}