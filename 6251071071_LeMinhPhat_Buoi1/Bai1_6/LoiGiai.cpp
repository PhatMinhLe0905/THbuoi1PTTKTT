// 1.6. Đếm xem từ 1 đến 10.000.000 có bao nhiêu số chính phương ?
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 1; i <= 10000000; i++)
    {
        int square_root = sqrt(i);
        if (square_root * square_root == i)
        {
            count++;
        }
    }
    cout << "So luong so chinh phuong trong khoang tu 1 den 10.000.000 la: " << count << endl;
    return 0;
}