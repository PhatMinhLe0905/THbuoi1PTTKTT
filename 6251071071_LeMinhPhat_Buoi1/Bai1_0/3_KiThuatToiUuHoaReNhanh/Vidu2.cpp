// ĐỀ: Nhập số tự nhiên n , nếu n là số có một trong các tính chất sau thì thực hiện công việc
// S1 ngược lại thì thực hiện công việc S2. Các tính chất đó là lẻ, nguyên tố , chính phương, hoàn hảo
#include <iostream>
using namespace std;

bool checkOdd(int n)
{
    if (n % 2 == 1)
    {
        return true;
    }
    return false;
}

bool checkPrime(int n)
{
    bool isPrime = true;
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
}

bool isPerfectSquare(int n)
{
    int root = sqrt(n);
    if(root * root == n){
        return true;
    }
    return false;
}

bool checkPerfect(int n)
{
    int sum = 0; // khai báo biến sum
    for (int i = 1; i <= n / 2; i++)
    { // tạo vòng lặp for để tìm ước số của a
        if (n % i == 0)
            sum += i; // tổng các ước số của a
    }
    if (sum == n)
        return true; // trả về true
    return false;    // ngược lại trả về false
}
int main()
{
    int n;
    cout<<"nhap n: ";
    cin >> n;
    if(checkOdd(n) || checkPrime(n) || checkPrime(n) || isPerfectSquare(n)){
        cout<<"thuc hien lenh 1"<<endl;
    }else{
        cout<<"thuc hien lenh 2s"<<endl;
    }
}