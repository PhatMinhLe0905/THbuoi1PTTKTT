#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    int i, ii, j, n;
    int hs[100][100];
    cout << "Nhap n: ";
    cin >> n;
    cout << "\n";
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            hs[i][j] = 0;
    for (i = 1; i <= n; i++)
    {
        hs[i][1] = 1;
        hs[i][i] = 1;
    }
    for (i = 2; i <= n; i++)
    {
        ii = i / 2 + 1;
        for (j = 2; j <= ii; j++)
        {
            hs[i][j] = hs[i - 1][j] + hs[i - 1][j - 1];
            hs[i][i - j + 1] = hs[i][j];
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            cout << setw(4) << hs[i][j] << " ";
        cout << "\n";
    }
    getch();
    return 0;
}