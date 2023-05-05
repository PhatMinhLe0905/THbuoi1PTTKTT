#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
int main()
{
    int a[] = {4, -5, 6, -4, 2, 3, -7};
    for (int L = 0; L < 7; L++)
        for (int U = L; U < 7; U++)
        {
            int sum = 0;
            for (int I = L; I <= U; I++)
                sum = sum + a[I];
            int maxsofar = max(maxsofar, sum);
        }
        // fixing bug
    // cout << "result: " << maxsofar << endl;
}
// Chương trình này tuy ngắn và dể hiểu, tuy nhiên nó chạy rất chậm.
// Số lần thực hiện các phép toán của vòng lặp bên trong:
// Thuật toán này có độ phức tạp là O(n^3)