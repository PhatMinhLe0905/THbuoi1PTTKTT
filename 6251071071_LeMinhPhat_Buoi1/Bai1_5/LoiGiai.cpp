#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string add(string s1, string s2)
{
    string res = "";
    int carry = 0;
    int i = s1.length() - 1, j = s2.length() - 1;
    while (i >= 0 || j >= 0)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += s1[i] - '0';
            i--;
        }
        if (j >= 0)
        {
            sum += s2[j] - '0';
            j--;
        }
        carry = sum / 10;
        sum %= 10;
        res += to_string(sum);
    }
    if (carry)
    {
        res += to_string(carry);
    }
    reverse(res.begin(), res.end());
    return res;
}

string subtract(string s1, string s2)
{
    string res = "";
    int borrow = 0;
    int i = s1.length() - 1, j = s2.length() - 1;
    while (i >= 0 || j >= 0)
    {
        int diff = borrow;
        if (i >= 0)
        {
            diff += s1[i] - '0';
            i--;
        }
        if (j >= 0)
        {
            diff -= s2[j] - '0';
            j--;
        }
        if (diff < 0)
        {
            diff += 10;
            borrow = -1;
        }
        else
        {
            borrow = 0;
        }
        res += to_string(diff);
    }
    reverse(res.begin(), res.end());
    while (res[0] == '0' && res.length() > 1)
    {
        res.erase(0, 1);
    }
    return res;
}

string multiply(string s1, string s2)
{
    int len1 = s1.length(), len2 = s2.length();
    if (len1 == 0 || len2 == 0)
    {
        return "0";
    }
    vector<int> result(len1 + len2, 0);
    int i1 = 0, i2 = 0;
    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        int n1 = s1[i] - '0';
        i2 = 0;
        for (int j = len2 - 1; j >= 0; j--)
        {
            int n2 = s2[j] - '0';
            int sum = n1 * n2 + result[i1 + i2] + carry;
            carry = sum / 10;
            result[i1 + i2] = sum % 10;
            i2++;
        }
        if (carry > 0)
        {
            result[i1 + i2] += carry;
        }
        i1++;
    }
    int i = result.size() - 1;
    while (i >= 0 && result[i] == 0)
    {
        i--;
    }
    if (i == -1)
    {
        return "0";
    }
    string s = "";
    while (i >= 0)
    {
        s += to_string(result[i--]);
    }
    return s;
}

int main()
{
    string s1, s2;
    cout << "Nhap s1: ";
    cin >> s1;
    cout << "Nhap s2: ";
    cin >> s2;
    cout << "Tong hai so la: " << add(s1, s2) << endl;
    cout << "Hieu hai so la: " << subtract(s1, s2) << endl;
    cout << "Tich hai so la: " << multiply(s1, s2) << endl;
    return 0;
}