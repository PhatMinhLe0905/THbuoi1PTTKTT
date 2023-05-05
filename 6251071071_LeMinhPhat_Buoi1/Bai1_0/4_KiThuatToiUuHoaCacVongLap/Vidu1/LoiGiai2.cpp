// Tính giá trị biểu thức sau:
// (1/1!) + (3/2!) + (5/3!) + (7/4!) +...+ ((2n-1)/n!)
// Nhận xét: Số hạng thứ i (1<=i<=n) được tính như sau
// (2*i-1)/i!
// Có thể cải tiến lời giải trên bằng cách đưa cách tính giai thừa (GT) ra ngoài vòng For,
// với cách làm này việc tính GT không bị lặp lại (số vòng lặp cũng giảm đi một)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhap n:  ";
    cin >> n;
    int E = 0;
    int gt = 1;
    for (int i = 1; i <= n; i++)
    {
        gt = gt * i;
        E = E + (2 * i - 1) / gt;
    }
    cout << "result: " << E << endl;
}