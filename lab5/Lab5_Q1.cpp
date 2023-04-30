#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int n;
  cout << "Enter the number of values you want to provide : ";
  cin >> n;

  vector<int> v(n);
  cout << "Enter the values : ";
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  cout << "The next permutation in lexicographic ordering are : " << endl;

  do
  {
    for (int i = 0; i < v.size(); i++)
    {

      cout << v[i] << " ";
    }
    cout << endl;

    int i, j;
    for (i = v.size() - 2; i >= 0; i--)
    {
      if (v[i] < v[i + 1])
      {
        break;
      }
    }
    if (i < 0)
    {
      break;
    }
    for (j = v.size() - 1; j > i; j--)
    {
      if (v[j] > v[i])
      {
        break;
      }
    }
    swap(v[i], v[j]);
    reverse(v.begin() + i + 1, v.end());
  } while (true);

  return 0;
}
