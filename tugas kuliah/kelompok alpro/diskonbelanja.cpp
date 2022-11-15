#include <iostream>
using namespace std;
int main()
{
  int belanja, x, diskon, total;

  x = 150000;

  cout << "Harga Beli : ";
  cin >> belanja;
  cout << endl;

  diskon = belanja * 20 / 100;
  total = belanja - diskon;

  if (belanja >= x)
  {
    cout << "Diskon " << diskon << endl;
    cout << "Total belanja : " << total << endl;
  }

  return 0;
}