#include <iostream>
using namespace std;
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
int main()
{
  int a, n;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter n: ";
  cin >> n;
  cout << "Power of a^n is : " << power(a, n);
  return 0;
}
