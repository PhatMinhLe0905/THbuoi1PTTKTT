#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "input n:  ";
  cin >> n;
  double S = 1;

  double fraction = 2.0 / 3.0;
  double product = 1.0;
  for (int i = 1; i <= n; i++)
  {
    product *= (2 * i - 1) / (2.0 * i);
    S += fraction * product;
  }

  cout << "Result for S with n = " << n << " la: " << S << endl;
}
