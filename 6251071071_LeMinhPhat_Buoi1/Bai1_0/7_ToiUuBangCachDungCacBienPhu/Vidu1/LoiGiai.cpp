#include <math.h>
#include <iostream>
using namespace std;
const float PI = 3.1416;
float f(float x)
{
    return sin(x) + cos(x);
}
float g(float x, float y)
{
    return 1 - sin(x) - sin(y);
}
int main()
{
    float x, y, p, kq;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    x = x * PI / 180;
    y = y * PI / 180;
    p = f(x);
    kq = (3 * p + 5 * g(p, y)) / g(g(x, y), p);
    cout << "result: " << kq;
}