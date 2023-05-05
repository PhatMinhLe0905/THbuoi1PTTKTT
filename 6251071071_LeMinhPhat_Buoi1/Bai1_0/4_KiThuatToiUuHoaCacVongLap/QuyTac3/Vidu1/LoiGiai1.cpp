#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    int a[4][4] = {{1, 4, 7, 2},
                   {9, 3, 5, 1},
                   {-9, 8, -4, 2},
                   {-4, 7, 4, 10}};
    int s1, s2;

    s1 = 0;
    for (int i = 0; i <= 3; i++)
    {

        for (int j = 0; j <= 3; j++)
        {

            if (i == j)
                s1 = s1 + a[i][j];
        }
    }

    s2 = 0;
    for (int i = 0; i <= 3; i++)
    {

        for (int j = 0; j <= 3; j++)
        {

            if (i + j == 3)
            {
                s2 = s2 + a[i][j];
            }
        }
    }
    cout << "result s1: " << s1 << endl;
    cout << "result s2: " << s2 << endl;
}