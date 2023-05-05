// Ten: Le Minh Phat
// MSSV: 6251071071
// Lop: CNTT K62
// email: 6251071071@st.utc2.edu.vn
// Ngay sinh: 09/05/2003
// Đề: Tìm các cặp số khác nhau M,N sao cho tổng các ước số
// của M bằng N và ngược laị với M,N <30000
#include <iostream>
using namespace std;

int TongUoc(int n)
{
    for (int i = 1; i <= 30000; i++)
        for (int j = i + 1; j <= 30000; j++)
            if ((TongUoc(i) == j) && (TongUoc(j) == i))
                cout << i<< " " << j;
}
int main()
{
    int n=3000;
    TongUoc(n);
}
// Hàm tonguoc(n) trả về tổng các ước số thực sự của n, chẳng hạn tonguoc(10)=1+2+5 =8
// Số lần thực hiện các phép toán của vòng lặp bên trong:
// Thời gian thực hiện thuật toán này được đánh giá là T(n)=O(n^3)