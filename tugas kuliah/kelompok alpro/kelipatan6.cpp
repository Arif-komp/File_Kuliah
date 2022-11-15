#include <iostream>
using namespace std;
int main()
{
  int x;

  cout << "Input X : ";
  cin >> x;
  cout << endl;

  if (x % 6 == 0 && x > 0)
  {
    cout << x << " adalah bilangan bulat positif kelipan 6" << endl;
  }
  else if (x % 6 != 0 && x > 0)
  {
    cout << x << " adalah bilangan bulat positif bukan kelipan 6 " << endl;
  }
  else
  {
    cout << x << " adalah bukan bilangan bulat positif " << endl;
  }

  return 0;
}