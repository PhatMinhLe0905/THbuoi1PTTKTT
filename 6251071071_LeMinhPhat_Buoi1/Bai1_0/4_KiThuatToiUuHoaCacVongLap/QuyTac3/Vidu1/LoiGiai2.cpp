// (giảm bớt các vòng lặp For)
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
    int s1 = 0, s2 = 0;
    for (int i = 0; i <= 3; i++)
    {
        s1 = s1 + a[i][i];
    }

    for (int i = 0; i <= 3; i++)
    {
        s2 = s2 + a[i][2 - i + 1];
    }
    cout << "result s1: " << s1 << endl; //1+3+ -4 + 10
    cout << "result s2: " << s2 << endl; //2+5+8+ -4
}