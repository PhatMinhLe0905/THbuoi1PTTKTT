#include <iostream>
using namespace std;

int main()
{
    int f[10]; // Tạo mảng để lưu trữ các số Fibonacci
    int n = 10;   // Tính số hạng thứ 10

    // Gán giá trị ban đầu cho 2 số đầu tiên của dãy
    f[0] = 0;
    f[1] = 1;

    // Sử dụng vòng lặp để tính toán các số Fibonacci tiếp theo
    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }

    // In ra số hạng thứ n của dãy Fibonacci
    cout << "so hang thu " << n << " cua day fibonacci la:  " << f[n] << endl;
    
}