// Ten: Le Minh Phat
// MSSV: 6251071071
// Lop: CNTT K62
// email: 6251071071@st.utc2.edu.vn
// Ngay sinh: 09/05/2003
//  ĐỀ: Viết chương trình tính tổng
//  S =1 + x/1!+ x^2/2! + x^3/3! + .... + x^n/n!,
//  với x và n cho trước.
//  Nhận xét: số hạng thứ i (1<=i<=n) được tính như sau:
#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "nhap n: ";
    cin >> n;
    cout << "nhap x: ";
    cin >> x;
    int sum = 1;
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        p = p * x / i;
        sum += p;
    }
    cout << "result: " << sum << endl;
}
// Thời gian thực hiện thuật toán này được đánh giá là T(n)=O(n)