#include <iostream>
using namespace std;
int tonguoc(int a)
{
    int t, s;
    s = 0;
    for (t = 1; t <= a / 2; t++)
        if (a % t == 0)
            s = s + t;
    return s;
}
int main()
{
    for (int i = 1; i <= 10000; i++)
    {
        for (int j = i + 1; j <= 10000; j++)
        {

            if ((tonguoc(i) == j) && (tonguoc(j) == i) && (i != j))
            {
                cout << "result: " << i << " " << j << endl;
            }
        }
    }
}
// => chay rat lau