#include <iostream>
using namespace std;

bool checkEqual(int A[], int B[], int n, int m)
{
    // Nếu số lượng phần tử không bằng nhau thì chắc chắn không bằng nhau
    if (n != m)
    {
        return false;
    }
    // So sánh từng phần tử trong mảng A và B, nếu có bất kì sự khác biệt nào thì chúng không bằng nhau
    for (int i = 0; i < n; i++)
    {
        if (A[i] != B[i])
        {
            return false;
        }
    }
    // Nếu điều kiện trên không xảy ra, có nghĩa là mảng A và B bằng nhau
    return true;
}

int main()
{
    int n, m;
    // cout << "Nhap so phan tu cua mang A: ";
    // cin >> n;
    // int A[n];
    // cout << "Nhap cac phan tu cua mang A:\n";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> A[i];
    // }

    // cout << "Nhap so phan tu cua mang B: ";
    // cin >> m;
    // int B[m];
    // cout << "Nhap cac phan tu cua mang B:\n";
    // for (int i = 0; i < m; i++)
    // {
    //     cin >> B[i];
    // }

    // if (checkEqual(A, B, n, m))
    // {
    //     cout << "Hai mang A va B bang nhau." << endl;
    // }
    // else
    // {
    //     cout << "Hai mang A va B khong bang nhau." << endl;
    // }

    // return 0;
}