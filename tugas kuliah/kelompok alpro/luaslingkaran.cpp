#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int r, l;

  cout << "Input Jari-jari lingkaran : ";
  cin >> r;
  cout << endl;

  l = 3.14 * r * r;

  cout << "Rumus Luas Lingkaran : L = Pi * r * r" << endl;
  cout << "L = " << l << endl;

  return 0;
}