// Ví dụ 1: Cải tiến phương pháp sắp xếp Double sort
#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n;
    cout << "nhap n : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "nhap phan tu thu a[" << i << "] : ";
        cin >> a[i];
    }
    int i = 0;
    while (i < n)
    {
        int j = i + 1;
        while (j < n)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;
        }
        i++;
    }
    cout << "result: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}