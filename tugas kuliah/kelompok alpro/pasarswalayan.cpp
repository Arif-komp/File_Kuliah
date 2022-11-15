#include <iostream>
using namespace std;
int main()
{
  int Belanja;

  cout << "Total Belanja : ";
  cin >> Belanja;

  while (Belanja % 25 > 0)
  {
    Belanja--;
  }

  cout << "Total Yang Harus dibayar : " << Belanja << endl;

  return 0;
}