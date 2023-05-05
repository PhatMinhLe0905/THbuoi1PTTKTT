#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
const float PI = 3.14;
float tinh(float x)
{
    float t, s;
    int i;
    s = 0;
    for (i = 1; i <= 100; i++)
    {
        t = i * x;
        s = s + sin(t) + cos(t);
    }
    return s;
}

int main()
{
    float x, s;
    cout << "Nhap goc: ";
    cin >> x;
    x = x * PI / 180;
    s = tinh(x);
    cout << "result: " << s << endl;
}