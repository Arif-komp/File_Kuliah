#include <iostream>
using namespace std;
int main()
{
  int a, b, c;

  cout << "A :";
  cin >> a;
  cout << "B :";
  cin >> b;
  cout << "C :";
  cin >> c;
  cout << endl;

  if (c * c < a * a + b * b)
  {
    cout << endl;
    cout << "Segitiga Lancip";
  }
  else if (c * c > a * a + b * b)
  {
    cout << endl;
    cout << "Segitiga Tumpul";
  }
  else
  {
    cout << endl;
    cout << "Segitiga Siku-Siku";
  }

  return 0;
}