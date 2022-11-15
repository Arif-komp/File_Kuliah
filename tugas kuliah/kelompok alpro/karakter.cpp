#include <iostream>
using namespace std;
int main()
{
  char karakter;

  cout << "Karakter : ";
  cin >> karakter;
  cout << endl;

  if (karakter >= '0' && karakter <= '9')
  {
    cout << karakter;
  }
  else
  {
    cout << "-1" << endl;
  }
  return 0;
}