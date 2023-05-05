#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "input n:  ";
    cin >> n;
    long double S = 0;
    long double tu = 1;  // tử số ban đầu bằng 1
    long double mau = 1; // mẫu số ban đầu bằng 1

    for (int i = 1; i <= n; i++)
    {
        tu = tu + 2;        // tăng tử số lên 2 đơn vị cho mỗi số hạng
        mau = mau * i;      // tính giai thừa mẫu số cho mỗi số hạng
        S = S + (tu / mau); // tính tổng
    }

    cout << "result S = " << S << endl;
    return 0;
}