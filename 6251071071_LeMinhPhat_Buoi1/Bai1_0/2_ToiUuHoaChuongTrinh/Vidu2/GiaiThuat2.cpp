// Ten: Le Minh Phat
// MSSV: 6251071071
// Lop: CNTT K62
// email: 6251071071@st.utc2.edu.vn
// Ngay sinh: 10/01/2003
// Đề: Tìm các cặp số khác nhau M,N sao cho tổng các ước số
// của M bằng N và ngược laị với M,N <30000
#include <iostream>
using namespace std;
int Tonguoc(int n);
int main()
{
    for (int i = 1; i <= 30000; i++)
    {
        int k = Tonguoc(i);
        if (Tonguoc(k) == i)
            cout << i << k;
    }
}

// Thời gian thực hiện thuật toán này được đánh giá là T(n)=O(n^2)