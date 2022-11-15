#include <iostream>
using namespace std;
int main()
{
  int nilai;

  cout << "Input Nilai : ";
  cin >> nilai;
  cout << endl;

  if (nilai >= 80)
  {
    cout << "Nilai : " << nilai << endl;
    cout << "Indeks Nilai : A" << endl;
  }
  else if (nilai >= 70 && nilai < 80)
  {
    cout << "Nilai : " << nilai << endl;
    cout << "Indeks Nilai : B" << endl;
  }
  else if (nilai >= 55 && nilai < 80)
  {
    cout << "Nilai : " << nilai << endl;
    cout << "Indeks Nilai : C" << endl;
  }
  else if (nilai >= 40 && nilai < 80)
  {
    cout << "Nilai : " << nilai << endl;
    cout << "Indeks Nilai : D" << endl;
  }
  else
  {
    cout << "Nilai : " << nilai << endl;
    cout << "Indeks Nilai : E" << endl;
  }

  return 0;
}