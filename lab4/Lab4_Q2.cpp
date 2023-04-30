#include <iostream>
int mod(int a, int b)
{
  int rem, qou;
  qou = a / b;
  rem = a - (b * qou);
  if (rem == 0)
  {
    return 0;
  }
  else
  {
    return rem;
  }
}
int power(int a, int b)
{
  int pow = 1;
  if (b == 0)
  {
    return 1;
  }
  else
  {
    pow = a * power(a, b - 1);
  }
  return pow;
}
using namespace std;
int main()
{
  int b, n, m, pow;
  cout << "Enter b ,n ,m : ";
  cin >> b >> n >> m;
  pow = power(b, n);
  cout << "b ^ n =" << pow << endl
       << "m =" << m << endl;
  cout << "b^n mod m is :" << mod(pow, m);
  return 0;
}