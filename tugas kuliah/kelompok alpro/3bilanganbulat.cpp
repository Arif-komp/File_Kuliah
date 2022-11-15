#include <iostream>
using namespace std;
int main()
{
  int x, y, z;

  cout << "X : ";
  cin >> x;
  cout << "Y : ";
  cin >> y;
  cout << "Z : ";
  cin >> z;

  if (x > y && x > z)
  {
    cout << " " << x;
    if (y > z)
    {
      cout << " " << y << " " << z;
    }
    else
    {
      cout << " " << z << " " << y;
    }
  }

  if (y > x && y > z)
  {
    cout << " " << y;
    if (x > z)
    {
      cout << " " << x << " " << z;
    }
    else
    {
      cout << " " << z << " " << x;
    }
  }

  if (z > x && z > y)
  {
    cout << " " << z;
    if (x > y)
    {
      cout << " " << x << " " << y;
    }
    else
    {
      cout << " " << y << " " << x;
    }
  }

  return 0;
}