// Tính giá trị biểu thức sau:
// (1/1!) + (3/2!) + (5/3!) + (7/4!) +...+ ((2n-1)/n!)
// Nhận xét: Số hạng thứ i (1<=i<=n) được tính như sau
// (2*i-1)/i!
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhap n: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int gt = 1;
        for (int j = 1; j <= i; j++)
            gt = gt * j;
        sum = sum + (2 * i - 1) / gt;
    }
    cout << "result: " << sum << endl;
}