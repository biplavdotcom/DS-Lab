#include <iostream>
#include <vector>

using namespace std;

void next_combination(vector<int> &v, int n)
{
  int r = v.size();
  for (int i = r - 1; i >= 0; i--)
  {
    if (v[i] < n - r + i + 1)
    {
      v[i]++;
      for (int j = i + 1; j < r; j++)
      {
        v[j] = v[j - 1] + 1;
      }
      return;
    }
  }
  v.clear();
}

int main()
{
  int n, r;
  cout << "Enter the values of n and r: ";
  cin >> n >> r;

  vector<int> v(r);
  for (int i = 0; i < r; i++)
  {
    v[i] = i + 1;
  }

  cout << "The next r combination in lexicographic ordering are : " << endl;
  do
  {
    for (int i = 0; i < r; i++)
    {
      cout << v[i] << " ";
    }
    cout << endl;

    next_combination(v, n);
  } while (!v.empty());

  return 0;
}