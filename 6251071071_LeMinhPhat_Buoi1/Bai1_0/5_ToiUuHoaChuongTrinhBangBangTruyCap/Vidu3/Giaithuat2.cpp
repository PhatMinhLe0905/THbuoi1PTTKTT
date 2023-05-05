// Tổng a[L..U]= Tổng a[L..U-1]+a[U]
#include <iostream>
using namespace std;
int main()
{
    int a[] = {4, -5, 6, -4, 2, 3, -7};
    int maxsofar = 0;
    for (int L = 0; L < 7; L++)
    {
        int sum = 0;
        for (int U = L; U < 7; U++)
        {
            sum = sum + a[U];
            maxsofar = max(maxsofar, sum);
        }
    }
    cout << "result: " << maxsofar << endl;
}
// fixing bug
// Số lần thực hiện các phép toán của vòng lặp bên trong:
// Thời gian thực hiện thuật toán này được đánh giá là O(n^2)