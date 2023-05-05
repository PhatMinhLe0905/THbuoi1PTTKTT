// 1.7. Cho dãy n số nguyên a0,a1,...,an-1. Hãy rút gọn dãy số.
// Ví dụ INPUT: 3 4 2 3 1 3 8 thì OUTPUT: 3 4 2 1 8
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr; // khởi tạo vector chứa dãy số nguyên
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;      // nhập số phần tử của dãy
    int prev = -1; // biến lưu phần tử trước đó, ban đầu gán là -1
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Nhap phan tu thu " << i << " : ";
        cin >> x; // nhập phần tử thứ i
        if (x != prev)
        {                     // nếu phần tử hiện tại khác phần tử trước đó
            arr.push_back(x); // thêm phần tử hiện tại vào vector
            prev = x;         // cập nhật lại giá trị của prev
        }
    }
    cout << "Day so sau khi rut gon la: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " "; // in ra các phần tử trong vector
    }
    return 0;
}